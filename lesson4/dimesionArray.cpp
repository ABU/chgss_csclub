#include <iostream>
using namespace std;

int main() {
    int scores[3][4];  // 3 位學生，每位 4 科
    int student, subject;

    // 輸入成績
    for (int i = 0; i < 3; i++) {
        cout << "輸入第 " << i+1 << " 位學生的 4 科成績: ";
        for (int j = 0; j < 4; j++) {
            cin >> scores[i][j];
        }
    }

    // 計算並輸出每位學生總分
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += scores[i][j];
        }
        cout << "學生 " << i+1 << " 總分: " << sum << endl;
    }

    // 查詢特定學生的特定科目
    cout << "查詢成績，輸入學生編號（0~2）與科目編號（0~3）: ";
    cin >> student >> subject;

    if(student >= 0 && student < 3 && subject >=0 && subject <4){
        cout << "學生 " << student+1 << " 的科目 " << subject+1
             << " 成績: " << scores[student][subject] << endl;
    } else {
        cout << "輸入錯誤！" << endl;
    }

    return 0;
}

