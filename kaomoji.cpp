#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    // �����u�B�k���u
    string armsL[] = {"?(", "��(", "((", "?("};
    string armsR[] = {")?", ")��", "))", ")?"};

    // ����
    string eyes[] = {"��???", "?�s?", "�X���X", "?_?", "��s��"};

    // �L��
    string mouths[] = {"", "�s", "��", "�s", "���s��"};

    // �H����
    string armL = armsL[rand() % 4];
    string armR = armsR[rand() % 4];
    string eye  = eyes[rand() % 5];
    string mouth= mouths[rand() % 5];

    // �զX
    cout << armL << "(" << eye << mouth << ")" << armR << endl;

    return 0;
}

