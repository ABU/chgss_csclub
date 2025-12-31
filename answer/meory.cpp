#include <iostream>
using namespace std;

int main() {
    int n;
    long long M;
    cin >> n >> M;

    long long sum = 0;

    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        sum += x;

        if (sum > M) {
            cout << i << endl;  // 1-based index
            return 0;
        }
    }

    // 若從頭到尾都沒有超過 M
    cout << 0 << endl;
    return 0;
}

