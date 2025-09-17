#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 10;

    cout << (a == b) << endl; // 0 (false)
    cout << (a != b) << endl; // 1 (true)
    cout << (a > b)  << endl; // 0
    cout << (a < b)  << endl; // 1
    cout << (a >= b) << endl; // 0
    cout << (a <= b) << endl; // 1

    return 0;
}

