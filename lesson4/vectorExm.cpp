#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers; // 空的 vector

    // 新增元素
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // 修改元素
    numbers[1] = 25;

    // 遍歷 vector
    for(int i = 0; i < numbers.size(); i++) {
        cout << "第 " << i+1 << " 個數字: " << numbers[i] << endl;
    }

    // 刪除最後一個元素
    numbers.pop_back();

    cout << "最後一個元素已刪除，現在大小: " << numbers.size() << endl;

    return 0;
}

