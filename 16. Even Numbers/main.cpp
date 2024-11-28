#include <iostream>
using namespace std;

/**
 * Exercise: write a program that outputs all of the even numbers from 0 to 10 separated by spaces.
 * Use the while loop
 *
 * @return
 */
int main() {
    int counter = 0;

    while (counter <= 10) {
        if (counter % 2 == 0) {
            cout << counter << " ";
        }

        counter++;
    }

    return 0;
}
