#include <iostream>
using namespace std;

int main() {
    int mood;
    cout << "請輸入今天的心情指數 (1~10): ";
    cin >> mood;

    if (mood < 1 || mood > 10) {
        cout << "輸入錯誤，請輸入 1~10 之間的數字！" << endl;
    } 
    else if (mood <= 3) {
        cout << "今天需要一杯珍奶～" << endl;
    } 
    else if (mood <= 7) {
        cout << "今天還不錯，繼續加油！" << endl;
    } 
    else { // mood <= 10
        cout << "滿滿正能量！" << endl;
    }

    return 0;
}

