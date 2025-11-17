#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>
#include "../src/Task.hpp"

TEST_CASE( "Task constructor initializes correctly" ) {
    Task t("Buy milk");
    REQUIRE(t.getDescription() == "Buy milk");
    REQUIRE(t.completed() == false);
}

TEST_CASE( "Task can be marked complete" ) {
    Task t("Buy eggs");
    t.complete();
    REQUIRE(t.completed() == true);
}