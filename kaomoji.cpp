#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    // 左手臂、右手臂
    string armsL[] = {"?(", "╰(", "((", "?("};
    string armsR[] = {")?", ")╯", "))", ")?"};

    // 眼睛
    string eyes[] = {"’???", "?ω?", "°□°", "?_?", "⊙ω⊙"};

    // 嘴巴
    string mouths[] = {"", "︿", "▽", "ω", "╯︿╰"};

    // 隨機選
    string armL = armsL[rand() % 4];
    string armR = armsR[rand() % 4];
    string eye  = eyes[rand() % 5];
    string mouth= mouths[rand() % 5];

    // 組合
    cout << armL << "(" << eye << mouth << ")" << armR << endl;

    return 0;
}

