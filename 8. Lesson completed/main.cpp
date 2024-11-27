#include <iostream>
using namespace std;

int main() {
  const string lesson = "Data Types";
  constexpr bool isCompleted = true;

  cout << "Lesson: " << lesson << endl;
  cout << "Completed: " << isCompleted;

  return 0;
}
