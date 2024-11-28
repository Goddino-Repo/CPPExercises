#include <iostream>
using namespace std;

/**
 * Exercise: you're a tour manager and need a program that will identify small countries.
 * A country is considered small if its population is under 10000 and its area is under 10000 hectares.
 * The given code takes population and area from user input.
 *
 * @return
 */
int main() {
    int population;
    int area;

    cout << "Enter population: ";
    cin >> population;

    cout << "Enter area: ";
    cin >> area;

    if (population < 10000 && area < 10000) {
        cout << "Small country detected." << endl;
    } else {
        cout << "Not a small country." << endl;
    }

    return 0;
}
