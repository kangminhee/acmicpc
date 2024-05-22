#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, S[21] = {}, x; cin >> n;
    string command;
    while (n--) {
        cin >> command;
        if (command == "add") {
            cin >> x;
            S[x] = 1;
        } else if (command == "remove") {
            cin >> x;
            S[x] = 0;
        } else if (command == "check") {
            cin >> x;
            cout << S[x] << "\n";
        } else if (command == "toggle") {
            cin >> x;
            if (S[x]) S[x] = 0;
            else S[x] = 1;
        } else if (command == "all") {
            for (int i = 1; i <= 20; i++) {
                S[i] = 1;
            }
        } else if (command == "empty") {
            for (int i = 1; i <= 20; i++) {
                S[i] = 0;
            }
        }
    }
    cout << ~0;
}