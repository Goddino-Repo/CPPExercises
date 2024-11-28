#include <iostream>
using namespace std;

/**
 * Exercise: you are writing a program for a customer support vendor. When calling the service,
 * users can select from among these features using the corresponding numbers:
 * 1 ⇨ Select language
 * 2 ⇨ Contact operator
 * 3 ⇨ Leave feedback
 * The given program takes the selected number as input.
 *
 * @return
 */
int main() {
    int choice;

    cout << "1. Select language" << endl;
    cout << "2. Contact operator" << endl;
    cout << "3. Leave feedback" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Selecting language..." << endl;
            break;
        case 2:
            cout << "Contacting operator..." << endl;
            break;
        case 3:
            cout << "Leaving feedback..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }

    return 0;
}
