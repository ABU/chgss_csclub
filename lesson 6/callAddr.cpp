#include <iostream>
using namespace std;

// 函數接收長、寬，以及兩個用來放結果的「地址」
void calculate(int length, int width, int* area, int* perimeter) {
    *area = length * width;            // 遠端填寫面積
    *perimeter = 2 * (length + width); // 遠端填寫周長
}

int main() {
    int myArea = 0;      // 準備好的空籃子 1
    int myPerimeter = 0; // 準備好的空籃子 2

    // 把籃子的地址 (&) 交給函數
    calculate(10, 5, &myArea, &myPerimeter);

    cout << "面積是：" << myArea << endl;
    cout << "周長是：" << myPerimeter << endl;

    return 0;
}
