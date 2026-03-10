#include <iostream>
using namespace std;

// 交換函數：接收兩個「地址」
void swap(int* p1, int* p2) {
    int temp = *p1; // 先把第一個地址裡的東西存到臨時箱子
    *p1 = *p2;      // 把第二個地址裡的東西搬到第一個地址
    *p2 = temp;     // 把臨時箱子的東西搬到第二個地址
}

int main() {
    int A = 10, B = 99;
    
    cout << "交換前：A=" << A << ", B=" << B << endl;

    // 關鍵：傳入 A 和 B 的「地址」(&)
    swap(&A, &B);

    cout << "交換後：A=" << A << ", B=" << B << endl;
    return 0;
}
