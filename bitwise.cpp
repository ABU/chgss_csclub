#include <iostream>
using namespace std;

int main() {
    int a = 6;  // 0110
    int b = 3;  // 0011

    cout << (a & b) << endl; // AND  �� 2  (0010)
    cout << (a | b) << endl; // OR   �� 7  (0111)
    cout << (a ^ b) << endl; // XOR  �� 5  (0101)
    cout << (a << 1)<< endl; // ���� �� 12 (1100)
    cout << (a >> 1)<< endl; // �k�� �� 3  (0011)

    return 0;
}

