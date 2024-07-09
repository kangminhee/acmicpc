#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int D[65][65] = {};
    char c;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c;
            D[i][j] = ( c == '1' ? 1 : 0);
        }
    }



    
    cout << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << D[i][j];
        }
        cout << "\n";
    }
    return 0;
}