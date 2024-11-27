#include <iostream>
using namespace std;

/**
 * Exercise: declare a string and a boolean variables, then print all.
 *
 * @return
 */
int main() {
  const string lesson = "Data Types";
  constexpr bool isCompleted = true;

  cout << "Lesson: " << lesson << endl;
  cout << "Completed: " << isCompleted;

  return 0;
}
