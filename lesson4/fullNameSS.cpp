#include <iostream>
#include <sstream>   // 必須 include，提供 stringstream
#include <string>
using namespace std;

int main() {
    string fullName;
    getline(cin, fullName);  // 讀取整行姓名，可能包含空格

    stringstream ss(fullName); // 用 stringstream 包裝字串
    string firstName, lastName;

    // 使用 >> 運算子以空白鍵切割字串
    ss >> firstName;  // 讀取第一個單字當作 first name
    ss >> lastName;   // 讀取第二個單字當作 last name
    
    // 使用 getline(ss, variable, delimiter) 來切割逗號
    //getline(ss, lastName, ',');   // 逗號前的字串 -> Last Name
    //getline(ss, firstName, ',');  // 逗號後的字串 -> First Name

    cout << "First name: " << firstName << endl;
    cout << "Last name: " << lastName << endl;

    return 0;
}

