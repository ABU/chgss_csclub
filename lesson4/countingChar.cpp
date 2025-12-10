#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cin >> name;
    //getline(cin, name);   // Åª¾ã¦æ
    int count = 0;
    for (int i = 0; i < name.length(); i++) {
    	//char c = name[i];
        //if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    	
        if (name[i] == 'a' || name[i] == 'A') {
            count++;
        }
    }
    cout <<"Hello: " << name <<endl; 
    cout <<"count: "<< count << endl;
    return 0;
}

