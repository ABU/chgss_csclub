#include <iostream>
using namespace std;

int main() {
    // 建立一個 2 列 3 行的陣列 (想像成 2 樓，每層有 3 間房)
    int matrix[2][3] = {
        {10, 20, 30}, 
        {40, 50, 60}
    };

    cout << "--- 1. 傳統索引寫法 ---" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            // 直接用 [列][行] 座標找位置
            cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "\n--- 2. 指標算術寫法 ---" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            // 拆解步驟：
            // 1. (matrix + i)      : 先跳到第 i 樓的大門口
            // 2. *(matrix + i)     : 推開大門，進去那一層樓的走廊
            // 3. (*(matrix + i) + j): 沿著走廊走到第 j 間房門口
            // 4. * (最外層的星號)   : 拿出房間裡的資料
            cout << "值: " << *(*(matrix + i) + j) << "  ";
        }
        cout << endl;
    }

    return 0;
}
