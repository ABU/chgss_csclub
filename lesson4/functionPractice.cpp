#include <iostream>
using namespace std;

int summary(int a, int b){
		int sum = a + b;
		return sum;
}

int max(int a, int b, int c){
	int maxVal = a;
	
	if(b > maxVal){
		maxVal = b;
	}
	if(c > maxVal){
		maxVal = c;
	}
	
	return maxVal;
}


int main(){
	int a, b, c;
	cout <<"enter 2 number"<<endl;
	cin  >> a  >> b;
	cout<<"the sum is " << summary(a,b) <<endl;
	
	cout << "enter 3 number" <<endl;
	cin >>a >> b >> c;
	cout<< "the max value is " <<max(a,b ,c);
	return 0;
}
