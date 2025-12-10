#include <iostream>
using namespace std;

int main() {
    // 宣告一個整數陣列
    int scores[5] = {80, 90, 75, 60, 85};

    // 修改元素
    scores[2] = 78;

    // 取出元素
    cout << "第三個分數: " << scores[2] << endl;

    // 用 for 迴圈遍歷陣列
    for (int i = 0; i < 5; i++) {
        cout << "第 " << i+1 << " 個分數: " << scores[i] << endl;
    }

    return 0;
}

