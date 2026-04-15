#include <iostream>
using namespace std;

void byValue(int x) { x = 100; }
void byReference(int& x) { x = 200; }
void byPointer(int* x) { *x = 300; }

int main() {
    int a = 10;

    byValue(a);
    cout << a << endl;

    byReference(a);
    cout << a << endl;

    byPointer(&a);
    cout << a << endl;
}
