#include <iostream>
using namespace std;

/**
 * Exercise: the array you are given represents the menu of breakfast options available at the hotel.
 * The Chef decided to replace one of the options with “Fluffy Pancakes”
 * The given program takes the index of the option to be replaced as input.
 *
 * @return
 */
int main() {
    int optionIndex;
    string breakfastOptions[] = {
        "🍳 Eggs and Toast",
        "🥓 Bacon and Egg",
        "🧇 Chicken and Waffles",
        "🥚 Scrambled Eggs",
        "🍗 Fried Chicken"
    };
    int index = 0;

    cout << "Current breakfast options:" << endl;
    for (const string &option: breakfastOptions) {
        cout << index << ". " << option << endl;
        index++;
    }

    cout << "Enter the index of the option to be replaced: ";
    cin >> optionIndex;

    if (optionIndex < 0 || optionIndex >= size(breakfastOptions)) {
        cout << "Invalid option index. Please enter a valid index between 0 and ";
        cout << size(breakfastOptions) - 1 << "." << endl;
        return 1;
    }

    breakfastOptions[optionIndex] = "🥞 Fluffy Pancakes";

    cout << "\nOption replaced successfully.\n\n";
    cout << "Updated breakfast options:" << endl;
    index = 0;
    for (const string &option: breakfastOptions) {
        cout << index << ". " << option << endl;
        index++;
    }
    return 0;
}
