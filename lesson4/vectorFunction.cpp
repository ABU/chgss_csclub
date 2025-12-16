#include <iostream>
#include <vector>
using namespace std;

// т vector ず程
int maxOfVector(const vector<int>& v) {
    int maxVal = v[0];  // 安砞材じ程
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > maxVal) {
            maxVal = v[i];
        }
    }
    return maxVal;
}

// т vector ず程
int minOfVector(const vector<int>& v) {
    int minVal = v[0];  // 安砞材じ程
    for (int i = 1; i < v.size(); i++) {
        if (v[i] < minVal) {
            minVal = v[i];
        }
    }
    return minVal;
}

// 璸衡 vector ず┮Τじ羆㎝
int sumOfVector(const vector<int>& v) {
    int total = 0;
    for (int i = 0; i < v.size(); i++) {
        total += v[i];
    }
    return total;
}

int main() {
    vector<int> nums;
    int n, val;

    cout << "叫块 vector じ计: ";
    cin >> n;

    cout << "叫块 " << n << " 俱计ノ筳秨: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        nums.push_back(val);
    }

    cout << "程: " << maxOfVector(nums) << endl;
    cout << "程: " << minOfVector(nums) << endl;
    cout << "羆㎝: " << sumOfVector(nums) << endl;

    return 0;
}

