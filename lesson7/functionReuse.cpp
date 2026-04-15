#include <iostream>
using namespace std;

// тㄢ计い程
int max2(int a, int b) {
    return (a > b) ? a : b;
}

// ノ max2 ノ呸胯т计い程
int max3(int a, int b, int c) {
    return max2(max2(a, b), c);
}

int main() {
    int a, b, c;

    cout << "叫块俱计";
    cin >> a >> b >> c;

    int result = max3(a, b, c);

    cout << "程琌" << result << endl;

    return 0;
}
