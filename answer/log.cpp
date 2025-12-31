#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();  // ²M±¼´«¦æ¦r¤¸

    bool found = false;

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);

        if (s.size() >= 4 && s.substr(0, 4) == "LOG:") {
            cout << s.substr(4) << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }

    return 0;
}

