#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; int n, res = 0; cin >> s >> n;
    string ss;
    for (int i = 0; i < n; i++) {
        cin >> ss;
        if (s==ss) res++;
    }
    cout << res;
}