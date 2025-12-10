#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> scores;   // 用 vector 存放不確定數量的分數
    int x;

    cout << "請輸入分數（輸入 -1 結束）:" << endl;

    while (true) {
        cin >> x;
        if (x == -1) break;   // -1 結束輸入
        scores.push_back(x);  // 將分數加入 vector
    }

    // 若沒有輸入任何分數
    if (scores.size() == 0) {
        cout << "沒有輸入任何分數。" << endl;
        return 0;
    }

    // 計算總和
    int sum = 0;
    for (int i = 0; i < scores.size(); i++) {
        sum += scores[i];
    }

    // 輸出結果
    cout << "總和: " << sum << endl;
    cout << "平均: " << sum * 1.0 / scores.size() << endl;

    return 0;
}

