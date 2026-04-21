#include <iostream>
using namespace std;

struct Student {
  string name;
  int score;
};

// ? 傳入 struct（會複製一份）
bool isPassed(Student s) {
  return s.score >= 60;
}

// ? 傳址（用 & 較快，不複製）pass by referrence
void printInfo(Student& s) {
  cout << s.name << ": " << s.score <<endl;
}


//回傳Struct
Student makeStudent(string name, int score){
	Student s;
	s.name= name;
	s.score = score;
	
	return s;
} 

int main() {
  Student s1 = {"小明", 75};
  Student s2 = makeStudent("小美", 45);
  
  if (isPassed(s1))
    cout << s1.name << " 及格！"<<endl;
    
  printInfo(s1);
  printInfo(s2);
}
