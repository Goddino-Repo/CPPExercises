#include <iostream>
using namespace std;

/**
 * Exercise: take the age of the client as input, then output "Welcome", in case it's greater or equal to 16, and "Not allowed", if it's not.
 * For example, if the user enters 28 as their age, the output should be "Welcome".
 *
 * @return
 */
int main() {
    int clientAge;
    cout << "Please, enter your age: ";
    cin >> clientAge;

    if (clientAge >= 16) {
        cout << "Welcome to the Club Entrance!";
    } else {
        cout << "You are not allowed to join!";
    }

    return 0;
}
