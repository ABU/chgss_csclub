#include <iostream>
using namespace std;

class Dog {
private:          // 私有區
  string name;   // 外部不能直接讀寫
  int age;

public:           // 公開區
  // 建構子（名稱同 class，無回傳型別）
  Dog(string n, int a) {
    name = n;
    age = a;
  }

  void bark() {
    cout << name << " 說：汪！" <<endl;
  }

  string getName() {
    return name;  // getter
  }
};

int main() {
  Dog d1("小黑", 3);
  d1.bark();
  cout <<d1.getName();
  // d1.name = "X" ← 編譯錯誤！
}
