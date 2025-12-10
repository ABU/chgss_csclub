#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);   // Åª¾ã¦æ

    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z')) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

