#include <iostream>
using namespace std;

struct Book { 
	string title, 
	author; int pages; 
};
int main() {
  	Book b1 = {"哈利波特", "JK羅琳", 500};
  	Book b2 = {"小王子", "聖修伯里", 112};
  	cout << "書名：" << b1.title << " 作者：" << b1.author << " 頁數：" << b1.pages << endl;
  	cout << "書名：" << b2.title << " 作者：" << b2.author << " 頁數：" << b2.pages << endl;
	return 0;
}
