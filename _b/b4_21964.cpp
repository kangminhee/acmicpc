#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int l = s.length();
    for (int i = l-5; i <= l-1; i++) {
        cout << s[i];
    }
    return 0;
}