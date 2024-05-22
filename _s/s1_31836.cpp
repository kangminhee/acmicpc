#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if (n == 2) {
        cout << "1\n1\n1\n2";
        return 0;
    } else if (n == 3) {
        cout << "2\n1 2\n1\n3";
        return 0;
    }
    if (n%3 == 0) {
        cout << n/3*2 << "\n";
        for (int i = 1; i <= n; i++) {
            if (i%3 != 0) cout << i << " ";
        }
        cout << "\n" << n/3 << "\n";
        for (int i = 1; i <= n; i++) {
            if (i%3 == 0) cout << i << " ";
        }
        return 0;
    } else if (n%3 == 1) {
        cout << (n-1)/3*2 << "\n";
        for (int i = 2; i <= n; i++) {
            if (i%3 != 1) cout << i << " ";
        } cout << "\n" << (n-1)/3 << "\n";
        for (int i = 2; i <=n ; i++) {
            if (i%3 == 1) cout << i << " ";
        }
        return 0;
    } else if (n%3 == 2) {
        cout << n/3 + 1 << "\n1 ";
        for (int i = 3; i <= n; i++) {
            if (i % 3 == 2) cout << i << " ";
        } cout << "\n" << n/3*2+1 << "\n2 ";
        for (int i = 3; i <= n; i++) {
            if (i % 3 != 2) cout << i << " ";
        }
    }
}