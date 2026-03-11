#include <iostream>
using namespace std;

void doubleValue(int* num)
{
    // 在這裡完成程式
    *num = *num * 2;
}

int main()
{
    int n;
    cin >> n;

    cout << "原本的數字：" << n << endl;

    doubleValue(&n);

    cout << "兩倍之後：" << n << endl;

    return 0;
}
