#include <bits/stdc++.h>
using namespace std;

int DP[1010][1010], res, x, y;
stack<char> st;

int main() {
    string a, b; cin >> a >> b;
    a = ' ' + a; b = ' ' + b;
    for (int i = 1; i < a.length(); i++) {
        for (int j = 1; j < b.length(); j++) {
            if (a[i] == b[j]) DP[i][j] = DP[i-1][j-1] + 1;
            else DP[i][j] = max(DP[i-1][j], DP[i][j-1]);
            if (DP[i][j] > res) {
                res = DP[i][j];
                x = i; y = j;
            }
        }
    }
    cout << res << "\n";
    res--;
    while (x != 0 && y != 0) {
        if (DP[x][y] == DP[x-1][y]) x--;
        else if (DP[x][y] == DP[x][y-1]) y--;
        else {
            st.push(a[x]);
            x--; y--;
        }
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}