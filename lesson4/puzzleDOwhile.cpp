#include <iostream>
#include <string>
using namespace std;

int main() {
    string msg;
    char cont;

    do {
        cout << "Enter your secret message: ";
        cin >> msg;

        bool found = false;
        for (int i = 0; i < msg.length(); i++) {
            if (msg[i] == 'x' || msg[i] == 'X') {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "Warning! Secret letter detected." << endl;
        } else {
            cout << "Safe message." << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    cout << "Decoding finished." << endl;
    return 0;
}

