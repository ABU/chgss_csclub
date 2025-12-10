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
    string name;
    cin >> name;
    cout << standardizeName(name) << endl;
    return 0;
}

