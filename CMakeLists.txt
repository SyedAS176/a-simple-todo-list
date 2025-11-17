cmake_minimum_required(VERSION 3.24)

project(a_simple_todo_list)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(task_test
        src/TodoList.cpp
        src/TodoList.hpp
        src/Task.cpp
        src/Task.hpp
        tests/task_test.cpp
        tests/TodoList_test.cpp
)

add_executable(TodoList_test
        src/TodoList.cpp
        src/TodoList.hpp
        src/Task.cpp
        src/Task.hpp
        tests/task_test.cpp
        tests/TodoList_test.cpp
)

add_executable(main
        main.cpp
        src/hello.cpp
        src/TodoList.cpp
        src/Task.cpp
)

target_link_libraries(task_test PRIVATE Catch2::Catch2WithMain)
target_link_libraries(TodoList_test PRIVATE Catch2::Catch2WithMain)