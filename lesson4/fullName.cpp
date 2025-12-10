#include <iostream>
#include <string>
using namespace std;

string standardizeName(string name) {
    for (int i = 0; i < name.length(); i++) {
        if (i == 0) name[i] = toupper(name[i]);
        else name[i] = tolower(name[i]);
    }
    return name;
}


int main() {
    string fullName;
    getline(cin, fullName);   // 讀整行姓名

    // 找空白的位置
    int spacePos = fullName.find(' ');

    // 切割 first name 與 last name
    string firstName = fullName.substr(0, spacePos);
    string lastName = fullName.substr(spacePos + 1);

    cout << "First name: " << standardizeName(firstName)<< endl;
    cout << "Last name: " << standardizeName(lastName)<< endl;

    return 0;
}

