#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;

    time_t now = time(0);
    tm t = *localtime(&now);  // �����ѰѦҦs������

    cout << t.tm_year + 1900 << "�~"
         << t.tm_mon + 1 << "��"
         << t.tm_mday << "�� "
         << t.tm_hour << ":"
         << (t.tm_min < 10 ? "0" : "") << t.tm_min //�T���B��l
         << " �����B�Ʀr�O�G" << number << endl;

    return 0;
}
