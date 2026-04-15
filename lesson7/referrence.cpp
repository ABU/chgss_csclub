#include <iostream>
using namespace std;

int addOne(int &a);

int main(){
	int num =5;
	cout <<addOne(num);
	
}

int addOne(int &a){
	a+=1;
	return a;		
}
