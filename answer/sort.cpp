#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> names(n);

    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // ¨Ì·Ó¦r¨å§Ç±Æ§Ç
    sort(names.begin(), names.end());
	cout <<"the sorting name...."<<endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}

