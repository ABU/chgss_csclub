#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    if (N < 2) {
        cout << "I got one million dollars.";
        return 0;
    }

    // 情況 1：N 本身是質數
    if (isPrime(N)) {
        cout << 1 << endl;
        cout << N;
        return 0;
    }

    // 情況 2：N 是偶數
    if (N % 2 == 0) {
        for (int p = 2; p <= N; p++) {
            if (isPrime(p) && isPrime(N - p)) {
                cout << 2 << endl;
                cout << p << " " << (N - p);
                return 0;
            }
        }
    }

    // 情況 3：N 是奇數
    if (isPrime(N - 2)) {
        cout << 2 << endl;
        cout << 2 << " " << (N - 2);
        return 0;
    }

    // 情況 4：一定用 3 個質數
    // 3 + p + q = N
    int rest = N - 3;
    for (int p = 2; p <= rest; p++) {
        if (isPrime(p) && isPrime(rest - p)) {
            cout << 3 << endl;
            cout << 3 << " " << p << " " << (rest - p);
            return 0;
        }
    }

    // 理論上不會到這
    cout << "I got one million dollars.";
    return 0;
}

