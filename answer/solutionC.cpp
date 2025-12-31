#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> P(n);
    for (int i = 0; i < n; i++) {
        cin >> P[i];
    }

    // 取得中位數 T
    sort(P.begin(), P.end());
    int T = P[(n - 1) / 2];  // ?n/2?（1-based）

    long long sum = 0;

    // 套用脈衝規則
    for (int i = 0; i < n; i++) {
        if (P[i] < T) {
            sum += (P[i] + T + 1) / 2;  // ceil
        } else if (P[i] > T) {
            sum += (P[i] + T) / 2;      // floor
        } else {
            sum += P[i];
        }
    }

    cout << sum << endl;

    return 0;
}

