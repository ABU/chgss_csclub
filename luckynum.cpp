#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;

    time_t now = time(0);
    tm t = *localtime(&now);  // 直接解參考存成物件

    cout << t.tm_year + 1900 << "年"
         << t.tm_mon + 1 << "月"
         << t.tm_mday << "日 "
         << t.tm_hour << ":"
         << (t.tm_min < 10 ? "0" : "") << t.tm_min //三元運算子
         << " 的幸運數字是：" << number << endl;

    return 0;
}
