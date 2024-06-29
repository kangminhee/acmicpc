#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if (n%2) {
        cout << "Either";
        return 0;
    } else {
        if (n%4) {
            cout << "Odd";
            return 0;
        }
        else {
            cout << "Even";
            return 0;
        }
    }
}