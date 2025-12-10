#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    const int ARRAY_SIZE = 20; // 將大小定義為常數，易於維護
    string name[ARRAY_SIZE];
    
    
    // 使用常數 ARRAY_SIZE 作為迴圈的上限
    for(int i = 0; i < ARRAY_SIZE; i++) {
    	stringstream ss;
		ss << i + 100; 
        name[i] = "number:" + ss.str();
        cout<<name[i]<<endl;
        ss.clear();
    }
    
    return 0;
}
