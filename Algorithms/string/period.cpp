#include <iostream>
#include <string>
using namespace std;

// 回傳字串的最小週期長度
// 例：ababab → 2,  abcabc → 3,  aaaaaa → 1
int period() {
    string str = "";
    cin >> str;
    int n = str.size();
    // 嘗試所有可能的週期長度 k（從 1 到 n-1）
    for (int k = 1; k < n; k++) {
        // 若長度 n 無法被 k 整除，則不可能是週期
        if (n % k != 0) continue;

        bool check = true;
        // 檢查整個字串是否符合週期 k 的重複
        // i % k：讓比較位置對應回週期的開頭
        for (int i = k; i < n; i++) {
            if (str[i] != str[i % k]) {
                check = false;  // 發現不符合週期 → 失敗
                break;
            }
        }
        if (check)
            return k;
    }
    return n;
}
int main()
{
    int num = 0;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cout << "最小子字串長度：" << period() << endl;
    }
}

