#include <iostream>
using namespace std;

int main() {
    bool x = true, y = false;

    cout << (x && y) << endl; // AND ¡÷ false
    cout << (x || y) << endl; // OR  ¡÷ true
    cout << (!x)     << endl; // NOT ¡÷ false

    return 0;
}

