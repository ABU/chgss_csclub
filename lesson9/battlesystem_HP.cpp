#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

// =====================
// 父類別 Player
// =====================
class Player {
protected:
    string name;
    int hp;
    int maxHp;

public:
    Player(string n, int h = 100) : name(n), hp(h), maxHp(h) {}

    void takeDamage(int d) {
        hp -= d;
        if (hp < 0) hp = 0;
    }

    bool isAlive() { return hp > 0; }

    string getName() { return name; }

    void printStatus() {
        int filled = hp / 10;
        int empty  = maxHp / 10 - filled;

        cout << "[" << name << "] HP [";
        for (int i = 0; i < filled; i++) cout << "█";
        for (int i = 0; i < empty;  i++) cout << " ";
        cout << "] " << hp << "/" << maxHp << endl;
    }
};

// =====================
// 子類別 Warrior
// =====================
class Warrior : public Player {
private:
    int attackPower;

public:
    Warrior(string n, int atk = 25) : Player(n), attackPower(atk) {}

    void attack(Player& target) {
        cout << name << " 揮劍攻擊！造成 " << attackPower << " 傷害！" << endl;
        target.takeDamage(attackPower);
    }
};

// =====================
// 子類別 Mage
// =====================
class Mage : public Player {
private:
    int spellPower;

public:
    Mage(string n, int sp = 30) : Player(n), spellPower(sp) {}

    void castSpell(Player& target) {
        cout << name << " 施法！造成 " << spellPower << " 傷害！" << endl;
        target.takeDamage(spellPower);
    }
};

// =====================
// 戰鬥邏輯
// =====================
void battle(Warrior& w, Mage& m) {
    int round = 1;

    cout << "=== 戰鬥開始！===" << endl;
    cout << "初始狀態：" << endl;
    w.printStatus();
    m.printStatus();

    while (w.isAlive() && m.isAlive()) {
        cout << "\n--- 第 " << round << " 回合 ---" << endl;

        w.attack(m);
        m.printStatus();

        if (m.isAlive()) {
            m.castSpell(w);
            w.printStatus();
        }

        round++;
    }

    cout << "\n=== ";
    if (w.isAlive())
        cout << w.getName() << " 獲勝！";
    else
        cout << m.getName() << " 獲勝！";
    cout << " ===" << endl;
}

// =====================
// 主程式
// =====================
int main() {
	
	
    Warrior warrior("小勇", 25);
    Mage    mage("小法", 30);

    battle(warrior, mage);

    return 0;
}
