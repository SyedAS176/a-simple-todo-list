#include <vector>
#include <string>
#include "Task.hpp"

class TodoList {
private:
    std::vector<Task> tasks; // A vector of Task objects named tasks

public:
    void add(const std::string& desc);
    bool complete(const std::string& desc);
    void all() const;
    void completed() const;
    void incomplete() const;
    void clear();

    // These are for unit testing since I implemented pretty printing in the methods above
    std::vector<std::string> getAllTasks() const;
    std::vector<std::string> getCompletedTasks() const;
    std::vector<std::string> getIncompleteTasks() const;
};