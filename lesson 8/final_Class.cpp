#include <iostream>
using namespace std;

class Player{
	private:
		string name;
		int hp;
		int score;
		
		
	public:
		Player(string n){
			name = n;
			hp = 100;
			score = 0;
		}
		
		void takeDamage(int d){
			hp -= d;
			if (hp < 0) hp = 0;
				
		}
		
		void addScore(int s){
			score+= s;
		}
		
		bool isAlive(){
			if(hp > 0)
				return true;
			else
				return false;
		}
		
		void printStatus(){
			cout << name << " hp: "<<hp <<" score: "<<score <<endl; 
		}
		
		int getScore(){
			return score;
		}
		
		string getName(){
			return name;
		}
};

void printWinner(Player p1, Player p2);

int main(){
	Player p1("Hero");
	Player p2("Shero");
	p1.takeDamage(10);
	p1.addScore(30);
	p1.printStatus();
	
	
	p1.takeDamage(200);
	if(p1.isAlive()) cout<< "Alive" <<endl;
	else cout<<"Dead" <<endl;
	
	p1.addScore(40);
	
	
	p2.addScore(100);
	
	p1.printStatus();
	p2.printStatus();
	
	printWinner(p1,p2);
	
}


void printWinner(Player p1, Player p2){
	if(p1.getScore() > p2.getScore())
		cout << p1.getName() << " Win" << endl;
	else if(p1.getScore() <p2.getScore())
		cout << p2.getName() << " Win" << endl;
	else 
		cout << "Tie!" << endl;
}
