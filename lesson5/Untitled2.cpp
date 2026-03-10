#include <iostream>
#include <string>
using namespace std;

int main(){
	string code;
	getline(cin, code);
	
	for(int i =0; i<code.size(); i++)
	{
		code[i]=code[i]-7;
		
	}
	cout<< code;
}
