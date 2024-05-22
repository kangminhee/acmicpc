#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[3], b[3]; cin >> a[0] >> b[0];
    a[2] = a[0] % 4 + 1;
    b[2] = b[0] % 4 + 1;
    a[1] = a[0] / 4; if (!(a[0] % 4)) a[1] += 1; 
    b[1] = b[0] / 4; if (!(b[0] % 4)) b[1] += 1;
    for (int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    } cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << b[i] << " ";
    }

    cout << "\n" << (max(a[1], b[1]) - min(a[1], b[1])) + (max(a[2], b[2]) - min(a[2], b[2]));
}