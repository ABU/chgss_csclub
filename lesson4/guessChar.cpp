#include <iostream>
using namespace std;

int main() {
    char secret = 'g';  // ¯¦±K¦r¥À
    char guess;

    cout << "Guess the secret letter (a-z): ";

    while (true) {
        cin >> guess;

        if (guess == secret) {
            cout << "Congratulations! You guessed it!" << endl;
            break;  // ²q¹ï´Nµ²§ô°j°é
        } else {
            cout << "Wrong! Try again: ";
        }
    }

    return 0;
}

