#include <iostream>
#include <string>
using namespace std;

class Player {
	protected:
	  string name;
	  int hp;
	  int maxHp;
	public:
	  Player(string n, int h = 100)
	    : name(n), hp(h), maxHp(h) {}
	
	  void takeDamage(int d) {
	    hp -= d;
	    if (hp < 0) hp = 0;
	  }
	  
	  bool isAlive() { return hp > 0; }
	  void printStatus() {
	    cout << "[" << name << "] HP: "
	         << hp << "/" << maxHp << endl;
	  }
	  
	  
	  string getName() { return name; }
};


class Warrior : public Player {
	private:
	  int attackPower;
	public:
	  Warrior(string n, int atk = 25)
	    : Player(n), attackPower(atk) {}
	
	  void attack(Player& target) {
	    cout << name << " 揮劍攻擊！"
	         << "造成 " << attackPower
	         << " 傷害！" << endl;
	    target.takeDamage(attackPower);
	  }
};

class Mage : public Player {
	private:
	  int spellPower;
	public:
	  Mage(string n, int sp = 30)
	    : Player(n), spellPower(sp) {}
	
	  void castSpell(Player& target) {
	    cout << name << " 施法！"
	         << "造成 " << spellPower
	         << " 傷害！" << endl;
	    target.takeDamage(spellPower);
	  }
};


void battle(Warrior& w, Mage& m) {
  int round = 1;
  cout << "=== 戰鬥開始！===" << endl;

  while (w.isAlive() && m.isAlive()) {
    cout << "\n--- 第 " << round << " 回合 ---" << endl;

    // Warrior 先攻
    w.attack(m);
    m.printStatus();

    // 確認 Mage 還活著才能反擊
    if (m.isAlive()) {
      m.castSpell(w);
      w.printStatus();
    }

    round++;
  }

  // 判斷勝負
  cout << "\n=== ";
  if (w.isAlive()) {
    cout << w.getName() << " 獲勝！";
  } else {
    cout << m.getName() << " 獲勝！";
  }
  cout << " ===" << endl;
}

int main() {
  Warrior warrior("小勇", 25);
  Mage    mage("小法", 30);
  warrior.printStatus();
  mage.printStatus();
  battle(warrior, mage);
}
