#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    char op;

    cout << "輸入運算符號 (+ - * /): ";
    cin >> op;

    if (op == '+') cout << a + b;
    else if (op == '-') cout << a - b;
    else if (op == '*') cout << a * b;
    else if (op == '/') cout << a / b;
    else cout<< "輸入錯誤";

    return 0;
}
