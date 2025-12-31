#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, eps;
    cin >> a >> b >> eps;

    if (fabs(a - b) <= eps) {
        cout << "Acceptable";
    } else {
        cout << "Not equal";
    }

    return 0;
}

