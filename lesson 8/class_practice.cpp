#include <iostream>
using namespace std;

class Cat{
	private :
		string name;
		int age;
		
		
	public :
		Cat(string n, int y){
			name = n;
			age = y;
		}
		
		void getName(){
			cout << name <<endl;
		}
		
		void meow(){
			cout << name <<" meow" <<endl;
		}
	
};


int main(){
	Cat cat1("дpкс",3);
	Cat cat2("дpл}",1);
	
	cat1.getName();
	cat1.meow();
}
