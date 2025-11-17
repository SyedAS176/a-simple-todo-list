#include "Task.hpp"

Task::Task(const std::string& desc) : description(desc), isCompleted(false) {}
// neat trick we learned this semester, assigning member variables before the constructor body runs

void Task::complete() {
    isCompleted = true;
}

bool Task::completed() const {
    return isCompleted;
}

std::string Task::getDescription() const {
    return description;
}