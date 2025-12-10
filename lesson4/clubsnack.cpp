#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// 將字串第一個字大寫，其餘小寫
string capitalize(string s) {
    if (s.length() == 0) return s;
    s[0] = toupper(s[0]);      // 首字母大寫
    for (int i = 1; i < s.length(); i++) {
        s[i] = tolower(s[i]);   // 其餘小寫
    }
    return s;
}

int main() {
    string input;
    cout << "Enter snack reports (name quantity, comma separated): ";
    getline(cin, input);

    string snacks[20];   // 假設最多 20 種零食
    int counts[20] = {0};
    int numSnacks = 0;

    stringstream ss(input);
    string item;

    while (getline(ss, item, ',')) { // 用逗號切割
        stringstream ssItem(item);
        string name;
        int quantity;
        ssItem >> name >> quantity;

        string nameCap = capitalize(name);

        // 統計零食數量
        bool found = false;
        for (int i = 0; i < numSnacks; i++) {
            if (snacks[i] == nameCap) {
                counts[i] += quantity;
                found = true;
                break;
            }
        }
        if (!found) {
            snacks[numSnacks] = nameCap;
            counts[numSnacks] = quantity;
            numSnacks++;
        }
    }

    // 找出出現最多的零食
    int maxIndex = 0;
    for (int i = 1; i < numSnacks; i++) {
        if (counts[i] > counts[maxIndex]) {
            maxIndex = i;
        }
    }

    // 輸出結果
    cout << "\nSnack totals:\n";
    for (int i = 0; i < numSnacks; i++) {
        cout << snacks[i] << " : " << counts[i] << endl;
    }

    cout << "\nTotal different snacks: " << numSnacks << endl;
    cout << "Most popular snack: " << snacks[maxIndex] 
         << " (" << counts[maxIndex] << ")" << endl;

    return 0;
}

