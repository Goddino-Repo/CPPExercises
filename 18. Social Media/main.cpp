#include <iostream>
using namespace std;

/**
 * Exercise: you are creating a social media application,
 * and need to develop a menu where the user can choose the topic he is interested in learning more about.
 * The topics are stored in the given array.
 *
 * @return
 */
int main() {
    int choice;
    const string topics[] = {"Sports", "Politics", "Business", "Technology", "Art"};

    cout << "Choose a topic to learn more about:" << endl;
    for (int index = 0; index < size(topics); index++) {
        cout << index + 1 << ". " << topics[index] << endl;
    }

    cout << endl << "Enter your choice (1-" << size(topics) << "): ";
    cin >> choice;

    if (choice >= 1 && choice <= size(topics)) {
        cout << "You have chosen to learn more about " << topics[choice - 1] << "." << endl;
        return 0;
    }

    cout << "Invalid choice. Please try again." << endl;
    return 1;
}
