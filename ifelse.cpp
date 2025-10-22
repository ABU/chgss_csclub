#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 60) {
        cout << "Pass!" << endl;
    } else {
        cout << "Fail!" << endl;
    }
    return 0;
}

