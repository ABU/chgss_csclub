#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);  // Åª¨ú¾ã¦æ¦r¦ê

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            cout << "Alert!" << endl;
            return 0;
        }
    }

    cout << "Safe." << endl;
    return 0;
}

