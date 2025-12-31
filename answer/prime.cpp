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

    if (isPrime(N)) {
        cout << 1;
        return 0;
    }

    if (N % 2 == 0) {
        cout << 2;
        return 0;
    }

    // N ¬O©_¼Æ
    if (isPrime(N - 2)) {
        cout << 2;
    } else {
        cout << 3;
    }

    return 0;
}

