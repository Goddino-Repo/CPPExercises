#include <iostream>
using namespace std;

/**
 * Exercise: you are developing a seat management system for a movie theater.
 * You are given a two-dimensional array with 6 rows and 6 columns,
 * in other words, 36 elements with false value that represent empty theater seats.
 * All 36 tickets for the movie were sold, so you need to identify all of the seats with value true.
 *
 * @return
 */
int main() {
    constexpr int rows = 6;
    constexpr int cols = 6;

    bool matrix[rows][cols] = {
        {false, false, false, false, false, false},
        {false, false, false, false, false, false},
        {false, false, false, false, false, false},
        {false, false, false, false, false, false},
        {false, false, false, false, false, false},
        {false, false, false, false, false, false},
    };

    cout << "Original matrix:" << endl;
    for (auto &row: matrix) {
        for (const bool &col: row) {
            cout << col << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix with all 0 values replaced by 1:" << endl;
    for (auto &row: matrix) {
        for (bool &col: row) {
            if (!col) {
                col = true;
                cout << col << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
