#include <iostream>
using namespace std;

int x = 100;  // ¥þ°ì

void test(){
    int x = 50;  // °Ï°ì¡]ÂÐ»\¡^
    cout <<"Here is in the function ";
    cout << x << endl;
}

int main(){
    test();        // 50
    cout <<"Here is in main ";
    cout << x;     // 100
}
