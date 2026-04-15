#include <iostream>
using namespace std;

// 四個功能函式
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

// 接收「函式」的函式
int calculate(int a, int b, int (*op)(int, int)) {
    return op(a, b);
}

int main() {
    int a = 10, b = 5;
    char choice;

    cout << "選擇運算 (+ - * /): ";
    cin >> choice;

    int result;

    if (choice == '+') result = calculate(a, b, add);
    else if (choice == '-') result = calculate(a, b, sub);
    else if (choice == '*') result = calculate(a, b, mul);
    else if (choice == '/') result = calculate(a, b, divide);
    else {
        cout << "輸入錯誤";
        return 0;
    }

    cout << "結果: " << result << endl;

    return 0;
}
