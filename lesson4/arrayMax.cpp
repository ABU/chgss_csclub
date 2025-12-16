#include <iostream>
using namespace std;

int main() {
    int arr[5];   // 宣告一個大小為 5 的整數陣列

    // 輸入資料
    for (int i = 0; i < 5; i++) {
        cout << "請輸入第 " << i + 1 << " 個數字: ";
        cin >> arr[i];
    }

    // 假設第一個元素是最大與最小值
    int maxVal = arr[0];
    int minVal = arr[0];

    // 從第二個元素開始比較
    for (int i = 1; i < 5; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    // 輸出結果
    cout << "最大值: " << maxVal << endl;
    cout << "最小值: " << minVal << endl;

    return 0;
}

