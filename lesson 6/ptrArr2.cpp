#include <iostream>
using namespace std;

// 「從給的地址開始，往後加 3 個」
int sum_three(int* start) {
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += *(start + i); // 順著地址往後摸 3 個
    }
    return total;
}

int main() {
    int scores[5] = {10, 20, 70, 80, 90}; // 前兩個是請假的

    // 不傳整個陣列，我們直接傳「第 3 個人的地址」
    // scores + 2 代表跳過前兩個，從第三個開始
    int result = sum_three(scores + 2);

    cout << "後三位同學的總分是：" << result << " 分";
    return 0;
}
