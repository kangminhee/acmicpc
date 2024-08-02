#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; int res = 0;
    for (int i = 1; i <= 5; i++) {
        cin >> s;
        for (int j = 1; j < s.length()-1; j++) {
            if (s[j-1] == 'F' && s[j] == 'B' && s[j+1] == 'I') {
                cout << i << " ";
                res++;
                break;
            }
        }
    }
    if (res == 0) cout << "HE GOT AWAY!";
    return 0;
}