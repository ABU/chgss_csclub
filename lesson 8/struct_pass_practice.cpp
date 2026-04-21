#include <iostream>
using namespace std;


struct Student{
	string name;
	int score;
};

void printResult(Student& s);

//------------------------------------------------//

int main(){
	Student s1 = {"小明", 85};
	Student s2 = {"小美", 45};
	
	printResult(s1);
	printResult(s2);
	
	return 0;
}

void printResult(Student& s){
	if(s.score >= 60){
		cout << s.name <<":" << s.score <<"分 Pass!" <<endl;
	}
	else{
		cout << s.name <<":" << s.score <<"分 不及格!" <<endl;
	}
	
	
}
