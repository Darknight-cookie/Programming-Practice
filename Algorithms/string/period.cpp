#include <iostream>
#include <string>
using namespace std;

int period() {
    string str = "";
    cin >> str;
    int n = str.size();
    for (int k = 1; k < n; k++) {
        if (n % k != 0) continue;

        bool check = true;
        for (int i = k; i < n; i++) {
            if (str[i] != str[i % k]) {
                check = false;
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

