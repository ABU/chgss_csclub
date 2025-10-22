#include <iostream>
using namespace std;

int main() {
    int mood, sleep, work;
    double total;

    cout << "請輸入心情指數 (1~10): ";
    cin >> mood;
    cout << "請輸入睡眠時數 (0~12): ";
    cin >> sleep;
    cout << "請輸入作業完成度 (0~100): ";
    cin >> work;

    if (mood < 1 || mood > 10 || sleep < 0 || sleep > 12 || work < 0 || work > 100) {
        cout << "輸入錯誤，請檢查數值範圍！" << endl;
    } else {
        double moodScore = mood * 10;
        double sleepScore = (sleep / 12.0) * 30;
        double workScore = (work / 100.0) * 60;
        total = moodScore + sleepScore + workScore;

        if (total >= 120)
            cout << "超棒的一天！你今天狀態絕佳！" << endl;
        else if (total >= 80)
            cout << "不錯喔～保持節奏！" << endl;
        else if (total >= 50)
            cout << "有點疲倦，記得放鬆一下。" << endl;
        else
            cout << "你需要休息，今天別勉強自己。" << endl;
    }

    return 0;
}

