#include <iostream>
using namespace std;

struct Point {
  int x;
  int y;
};

int main() {
  Point p1;
  p1.x = 3;  // 用 . 存取
  p1.y = 4;
  cout << p1.x << ", " << p1.y << endl;
  // 輸出：3, 4

  Point p2 = {10, 20};
  cout << p2.x <<"," << p2.y; 
   
  return 0;
}
