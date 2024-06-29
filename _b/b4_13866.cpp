#include <bits/stdc++.h>
using namespace std;

int main() {
    int l[4];
    for (int i = 0; i < 4; i++) {
        cin >> l[i];
    }
    sort(l, l+4);
    cout << abs(l[3]+l[0]-l[1]-l[2]);
}