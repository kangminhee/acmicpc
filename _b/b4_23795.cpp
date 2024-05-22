#include <bits/stdc++.h>

using namespace std;

int main() {
    int res = 0, in;
    cin >> in;
    while (in != -1) {
        res += in;
        cin >> in;
    }
    cout << res;
    return 0;
}