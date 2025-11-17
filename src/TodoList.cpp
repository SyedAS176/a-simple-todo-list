#include <iostream>
#include "TodoList.hpp"

void TodoList::add(const std::string& desc) {
    tasks.push_back(Task(desc));
}

bool TodoList::complete(const std::string& desc) {
    for (auto& t : tasks) {                     // Sift through the tasks vector
        if (t.getDescription() == desc) {
            t.complete();
            return true;
        }
    }
    return false;
}

void TodoList::all() const {    // Displays all the tasks (even the completed ones)
    if (tasks.empty()) {
        std::cout << "The list is empty." << std::endl;
        return;
    }

    for (auto& t : tasks) {
        std::cout << "- " << t.getDescription() << std::endl;
        if (t.completed()) {
            std::cout << " (Completed!)";
            std::cout << "\n";
        }
    }
}

void TodoList::completed() const {  // Displays only the completed tasks
    bool flag = false;
    for (auto& t : tasks) {
        if (t.completed()) {
            std::cout << "- " << t.getDescription() << "\n";
            flag = true;
        }
    }
    if (!flag) {
        std::cout << "No completed tasks!\n";
    }
}

void TodoList::incomplete() const { // Displays incomplete tasks
    bool flag = false;
    for (auto& t : tasks) {
        if (!t.completed()) {
            std::cout << "- " << t.getDescription() << "\n";
            flag = true;
        }
    }
    if (!flag) {
        std::cout << "No incomplete tasks!\n";
    }
}

void TodoList::clear() {    // Clears the TodoList object vector
    tasks.clear();
}

// Methods for unit testing

std::vector<std::string> TodoList::getAllTasks() const {
    std::vector<std::string> result;
    for (const auto& t : tasks) {
        result.push_back(t.getDescription());
    }
    return result;
}

std::vector<std::string> TodoList::getCompletedTasks() const {
    std::vector<std::string> result;
    for (const auto& t : tasks)
        if (t.completed()) {
            result.push_back(t.getDescription());
        }
    return result;
}

std::vector<std::string> TodoList::getIncompleteTasks() const {
    std::vector<std::string> result;
    for (const auto& t : tasks)
        if (!t.completed()) {
            result.push_back(t.getDescription());
        }
    return result;
}