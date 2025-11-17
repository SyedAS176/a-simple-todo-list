#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>
#include "../src/TodoList.hpp"

TEST_CASE( "Add and complete tasks" ) {
    TodoList list;
    list.add("A");
    list.add("B");

    REQUIRE(list.getAllTasks() == std::vector<std::string>{"A", "B"});
    REQUIRE(list.getIncompleteTasks() == std::vector<std::string>{"A", "B"});

    list.complete("A");

    REQUIRE(list.getCompletedTasks() == std::vector<std::string>{"A"});
    REQUIRE(list.getIncompleteTasks() == std::vector<std::string>{"B"});
}

TEST_CASE( "Complete missing task returns false" ) {
    TodoList list;
    list.add("A");
    REQUIRE(list.complete("B") == false);
}

TEST_CASE( "Clear removes all tasks" ) {
    TodoList list;
    list.add("A");
    list.add("B");
    list.clear();

    REQUIRE(list.getAllTasks().empty());
    REQUIRE(list.getCompletedTasks().empty());
    REQUIRE(list.getIncompleteTasks().empty());
}