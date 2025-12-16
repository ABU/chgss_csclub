#include <iostream>
#include <string>

using namespace std;

int main(){
	string str = "Hello";
	
	for(int i=str.size()-1; i>=0; i--){
	 	cout <<str[i];
	}
	
	
	return 0;
}
