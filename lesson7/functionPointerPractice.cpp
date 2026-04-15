#include <iostream>
using namespace std;


bool isEven(int x) {
    return x % 2 == 0;
}

bool greaterThan10(int x) {
    return x > 10;
}


void filter(int arr[], int n, bool (*condition)(int)) {
    for (int i = 0; i < n; i++) {
        if (condition(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int data[] = {5, 12, 7, 20, 3, 19};
    int n = 6;

    cout << "°¸¼Æ: ";
    filter(data, n, isEven);

    cout << "¤j©ó10: ";
    filter(data, n, greaterThan10);

    return 0;
}
