#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int age = 18;
	float weight =50.5f; 
	char gender ='F';
	string name = "Mia";
	bool isStudent = true; // 1 is true, 0 is false
	
	cout << "Name is " << name << endl;
	cout << "Age is "<< age << endl;
	cout << "Gender is " << gender << endl;
	cout << "Weight is "<< weight << endl;
	//cout << "Weight is "<< (int)weight << endl;
	cout << "Is studnet ? ";
	if(isStudent)
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	//system("pause");
	return 0;
}
