#include <iostream>
using namespace std;

int main(){
	int var =65;
	int* ptr = &var;
	cout << "the value of pointer " << *ptr << endl;  //the value of the pointer
	cout << "the address of int pointer "<<ptr<<endl; //the address value
	
	/*ptr++;
	cout << "the address of int pointer aftrer ++"<< ptr <<endl;
	cout << "the value of pointer " << *ptr;*/
	
	*ptr +=1; //use pointer to change the value
	cout << "the value of var after *ptr+=1 "<< var << endl; 
	cin.get();
	
	
	return 0;
}
