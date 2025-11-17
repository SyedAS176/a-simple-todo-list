#include <iostream>
#include "src/TodoList.hpp"

int main() {
  TodoList list;

  list.add("Buy milk");
  list.add("Buy eggs");
  list.add("Prepare a lesson for CSC 122");
  list.add("Sow beet seeds");

  list.complete("Buy eggs");

  // Pretty prints a list of each of the four tasks above
  std::cout << "\nALL TASKS:\n";
  list.all();

  // Pretty prints the task "Buy eggs"
  std::cout << "\nCOMPLETED TASKS:\n";
  list.completed();

  // Pretty prints the tasks "Buy milk",
  // "Prepare a lesson for CSC 122", and "Sow beet seeds"
  std::cout << "\nINCOMPLETE TASKS:\n";
  list.incomplete();

  // Clears the to-do list
  std::cout << "\nClearing the list...\n";
  list.clear();

  // Pretty prints a message saying that the list is empty
  std::cout << "\nAfter clearing:\n";
  list.all();
}
