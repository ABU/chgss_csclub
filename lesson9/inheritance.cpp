#include <iostream>
using namespace std;

class Character {
public:
    string name;
    int hp;

    Character(string n, int h) {
        name = n;
        hp = h;
    }

    void showStatus() {
        cout << name << " HP:" << hp << endl;
    }
};

class Warrior : public Character {
public:
    Warrior(string n, int h)
        : Character(n, h) {

    }

    void attack() {
        cout << "戰士揮劍！" << endl;
    }
};

class Mage : public Character {
public:
    Mage(string n, int h)
        : Character(n, h) {

    }

    void attack() {
        cout << "法師火球術！" << endl;
    }
};

int main() {

    Warrior w("勇者", 100);
    Mage m("法師", 80);

    w.showStatus();
    w.attack();

    cout << endl;

    m.showStatus();
    m.attack();

    return 0;
}
