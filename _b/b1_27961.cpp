#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll in, res;

int main() {
    cin >> in;

    if (in <= 1) {
        cout << in;
        return 0;
    }

    while (1) {
        res += 1;
        in = ceil(in / 2.0);
        if (in == 1) break;
    }
    cout << res + 1;
    return 0;
}