#include <iostream>
using namespace std;

int main() {
    int chinese, english, math;

    cout << "請輸入國文成績: ";
    cin >> chinese;
    cout << "請輸入英文成績: ";
    cin >> english;
    cout << "請輸入數學成績: ";
    cin >> math;

    if (chinese >= 60 && english >= 60 && math >= 60) {
        cout << "All Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}

