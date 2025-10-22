#include <iostream>
using namespace std;

int main() {
    int chinese, english, math;
    int total;
    double average;

    cout << "請輸入國文成績: ";
    cin >> chinese;
    cout << "請輸入英文成績: ";
    cin >> english;
    cout << "請輸入數學成績: ";
    cin >> math;

    total = chinese + english + math;
    average = total / 3.0;

    cout << "總分: " << total << endl;
    cout << "平均: " << average << endl;

    if (chinese >= 60 && english >= 60 && math >= 60) {
        if (average >= 90)
            cout << "Excellent!" << endl;
        else
            cout << "All Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}

