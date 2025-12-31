#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    
	cin >> n;

    vector<string> snacks;

    for (int i = 0; i < n; i++) {
        string cmd;
        cout<<"please enter command: ";
        cin >> cmd;

        if (cmd == "push") {
            string x;
            cin >> x;
            snacks.push_back(x);
        }
        else if (cmd == "pop") {
            if (!snacks.empty()) {
                snacks.pop_back();
            }
        }
        else if (cmd == "erase") {
            int idx;
            cin >> idx;
            if (idx >= 1 && idx <= snacks.size()) {
                snacks.erase(snacks.begin() + idx - 1);  //1-based
            }
        }
    }

    if (snacks.empty()) {
        cout << "empty";
    } else {
    	cout << "there are :";
        for (int i = 0; i < snacks.size(); i++) {
            cout << snacks[i];
            if (i != snacks.size() - 1) cout << " ";
        }
    }

    return 0;
}

