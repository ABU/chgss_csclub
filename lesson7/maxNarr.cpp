#include <iostream>
using namespace std;

int max2(int a, int b) {
    return (a > b) ? a : b;
}

int maxN(int arr[], int size) {
    int maxVal = arr[0];

    for (int i = 1; i < size; i++) {
        maxVal = max2(maxVal, arr[i]);  // 重用 max2
    }

    return maxVal;
}

int main() {
    int arr[5] = {3, 8, 2, 10, 5};

    int result = maxN(arr, 5);

    cout << "最大值是：" << result << endl;

    return 0;
}
