#include <iostream>
using namespace std;

/**
* Exercise: imagine you need to find out how many possible color combinations you can create with n number of colors.
* To do this, you need to calculate the <b>factorial of n</b>, which is the product of all positive integers less than or equal to n.
* The given code takes the n number as input.
 *
 * @return
 */
int main() {
    int numberOfColors;

    cout << "Enter the number of colors: ";
    cin >> numberOfColors;

    if (numberOfColors < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return 1;
    }

    if (numberOfColors > 20) {
        cout << "Factorial calculation is not supported for numbers greater than 20." << endl;
        return 2;
    }

    if (numberOfColors == 0 || numberOfColors == 1) {
        cout << "There is only one possible color combination for 0 or 1 colors." << endl;
        return 0;
    }

    int factorial = 1;
    for (int number = 1; number <= numberOfColors; number++) {
        factorial *= number;
    }

    cout << "The number of possible color combinations is: " << factorial << endl;

    return 0;
}
