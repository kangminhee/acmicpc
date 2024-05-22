#include <iostream>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n, condition, sum;
    char c;
    cin >> n;
    cin.ignore();

    for (int repeat = 1; repeat <= n; repeat++) {
        condition = 1, sum = 0;
        string str; int strlen;
        getline(cin, str);
        strlen = str.length();
        for (int i = 0; i < strlen; i++) {
            if (str[i] == '(') {
                sum++;
            } else {
                sum--;
            }
            if (sum < 0) {
                condition = 0;
                break;
            }
        }
        
        if (!condition || sum) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}