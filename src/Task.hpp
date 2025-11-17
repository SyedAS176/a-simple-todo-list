#include <string>

class Task {
private:
    std::string description;
    bool isCompleted;

public:
    Task(const std::string& desc);      // Constructor
    void complete();                    // Completes a task
    bool completed() const;             // Check if a task is complete
    std::string getDescription() const; // Gets the task description
};