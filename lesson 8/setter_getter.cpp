#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int score;

public:
    // 建構子（初始化）
    Student(string n, int s) {
        name = n;
        setScore(s);  // 用 setter 確保資料合法
    }

    // setter：設定名字
    void setName(string n) {
        if (n != "") {
            name = n;
        } else {
            cout << "名字不能是空的！" << endl;
        }
    }

    // getter：取得名字
    string getName() {
        return name;
    }

    // setter：設定分數（有檢查）
    void setScore(int s) {
        if (s >= 0 && s <= 100) {
            score = s;
        } else {
            cout << "分數必須在 0~100 之間！" << endl;
        }
    }

    // getter：取得分數
    int getScore() {
        return score;
    }
};

int main() {
    // 建立物件（會呼叫建構子）
    Student s1("小明", 90);

    cout << s1.getName() << " 的分數是：" 
         << s1.getScore() << endl;

    cout << "嘗試設定錯誤分數..." << endl;
    s1.setScore(150);  // 錯誤，會被擋下來

    cout << "目前分數：" << s1.getScore() << endl;

    cout << "修改名字..." << endl;
    s1.setName("小華");

    cout << s1.getName() << " 的分數是：" 
         << s1.getScore() << endl;

    return 0;
} 
