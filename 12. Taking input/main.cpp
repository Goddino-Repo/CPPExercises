#include <iostream>
using namespace std;

/**
 * Exercise: take in input the name and the age, then print them.
 *
 * @return
 */
int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << ", you are " << age << " years old";

    return 0;
}
