#include <iostream>
using namespace std;

int main() {
    char s[105];        // 假設字串長度不超過 100
    cin >> s;           // 讀入為 C-style 字串（以 '\0' 結尾）

    // 先手動計算字串長度
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    // 宣告反轉後的陣列
    char reversed[105];

    // 將字串反轉複製到 reversed
    for (int i = 0; i < len; i++) {
        reversed[i] = s[len - 1 - i];
    }

    // 最後記得補上 '\0'（結尾字元）
    reversed[len] = '\0';

    cout << reversed << endl;

    return 0;
}

