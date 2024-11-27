#include <iostream>
using namespace std;

int main() {
  const string name = "John";
  constexpr int age = 34;
  constexpr float height = 188.5;

  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Height: " << height << "cm";

  return 0;
}
