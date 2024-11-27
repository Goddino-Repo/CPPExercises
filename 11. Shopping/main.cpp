#include <iomanip>
#include <iostream>
using namespace std;

/**
 * Exercise: a local electronics shop has a great deal for notebooks.
 * You want to buy as many notebooks as you can afford.
 * For that, you need to calculate how many notebooks you can buy with the amount in your bank account and how much money will be left over.
 *
 * @return
 */
int main() {
    constexpr auto accountBalance = 2452.4;
    constexpr auto unitPrice = 259.99;

    constexpr int amount = accountBalance / unitPrice;
    constexpr double totalCost = amount * unitPrice;
    constexpr double newBalance = accountBalance - totalCost;

    cout << "Your current balance is: $" << accountBalance << endl;
    cout << "A single notebook is: $" << unitPrice << endl;
    cout << "You can afford " << amount << " notebooks" << endl;
    cout << "The total for " << amount << " notebooks is $" << totalCost << endl;
    cout << "If you buy " << amount << " notebooks, your new balance will be: $" << newBalance;

    return 0;
}
