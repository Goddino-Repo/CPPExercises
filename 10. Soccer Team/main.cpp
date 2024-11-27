#include <iostream>
using namespace std;

/**
 * Exercise: a soccer team won three games and ended one game with a draw.
 * A win scores 3 points, while a draw scores 1.
 * Calculate and output the total points earned by the team.
 *
 * @return
 */
int main() {
    constexpr int WIN_COUNT = 3;
    constexpr int DRAW_COUNT = 1;

    constexpr int WIN_POINTS = 3;
    constexpr int DRAW_POINTS = 1;

    constexpr int winPoints = WIN_POINTS * WIN_COUNT;
    constexpr int drawPoints = DRAW_POINTS * DRAW_COUNT;

    cout << "The total point scored is: " << winPoints + drawPoints << endl;

    return 0;
}
