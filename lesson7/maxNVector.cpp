#include <iostream>
#include <vector>
using namespace std;

int maxN(const vector<int>& v) {
    int maxVal = v[0];  // 假設第一個最大

    for (int i = 1; i < v.size(); i++) {
        if (v[i] > maxVal) {
            maxVal = v[i];
        }
    }

    return maxVal;
}

int main() {
    vector<int> v;

    int n, value;
    cout << "請輸入元素數量：";
    cin >> n;

    cout << "請輸入 " << n << " 個整數：" << endl;

    for (int i = 0; i < n; i++) {
        cin >> value;
        v.push_back(value);
    }

    cout << "最大值是：" << maxN(v) << endl;

    return 0;
}
