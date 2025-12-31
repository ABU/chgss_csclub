#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    while (n > 0) {
        count += n % 2;  // 取最低位
        n /= 2;          // 除以 2
    }

    cout << count << endl;
    return 0;
}

