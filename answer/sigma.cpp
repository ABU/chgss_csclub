#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    // 依耗時由小到大排序
    sort(t.begin(), t.end());

    long long current = 0;
    long long fatigue = 0;

    for (int i = 0; i < n; i++) {
        current += t[i];      // 目前完成的總耗時
        fatigue += current;   // 累加疲勞度
    }

    cout << fatigue << endl;
    return 0;
}

