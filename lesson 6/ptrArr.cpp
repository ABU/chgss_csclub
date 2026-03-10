#include <iostream>
using namespace std;

int main() {
    int scores[3] = {85, 92, 78}; // 三位社員的成績

    // 1. 傳統陣列寫法
    cout << "第一位成績 (陣列): " << scores[0] << endl;

    // 2. 指標寫法
    // scores 其實就是地址，* 代表「進去裡面看」
    cout << "第一位成績 (指標): " << *scores << endl;

    // 3. 往旁邊走一步 (指標加法)
    // (scores + 1) 代表往後移一個地址，再用 * 取值
    cout << "第二位成績 (指標位移): " << *(scores + 1) << endl;

    return 0;
}
