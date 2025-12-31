#include <iostream>
using namespace std;

int main() {
    int X, M;
    cin >> X >> M;

    for (int i = 0; i < M; i++) {
        char op;
        int v;
        cin >> op >> v;

        if (op == '+') {
            X = X + v;
        }
        else if (op == '-') {
            X = X - v;
        }
        else if (op == '*') {
            X = X * v;
        }
        else if (op == '/') {
            if (v == 0) {
                cout << "ERROR";
                return 0;
            }
            X = X / v;
        }
        else if (op == '%') {
            if (v == 0) {
                cout << "ERROR";
                return 0;
            }
            X = X % v;
        }
        else {
            cout << "ERROR";
            return 0;
        }
    }

    cout << X;
    return 0;
}
