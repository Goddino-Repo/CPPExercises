#include <iostream>
using namespace std;

/**
 * Exercise: Declare 3 variables: name, age and height, then print all.
 *
 * @return
 */
int main() {
  const string name = "John";
  constexpr int age = 34;
  constexpr float height = 188.5;

  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Height: " << height << "cm";

  return 0;
}
