#include <iostream>
using namespace std;

int main() {
    char secret = 'g';
    char guess;
    char again;

    do {
        cout << "Guess a letter (a-z): ";
        cin >> guess;

        if (guess == secret) {
            cout << "Correct!" << endl;
        } else {
            cout << "Wrong!" << endl;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "Game Over." << endl;
    return 0;
}

