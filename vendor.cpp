#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "請輸入飲料代號 (1~4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "您選擇的是：紅茶，價格：25元" << endl;
            break;
        case 2:
            cout << "您選擇的是：綠茶，價格：30元" << endl;
            break;
        case 3:
            cout << "您選擇的是：奶茶，價格：40元" << endl;
            break;
        case 4:
            cout << "您選擇的是：珍珠奶茶，價格：50元" << endl;
            break;
        default:
            cout << "查無此品項。" << endl;
    }

    return 0;
}

