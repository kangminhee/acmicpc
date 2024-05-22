#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    queue<int> q;
    string input;

    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input == "push") {
            int x; cin >> x;
            q.push(x);
        } else if (input == "pop") {
            if (q.empty()) {
                cout << "-1\n";
                continue;
            }
        cout << q.front() << "\n";
        q.pop();
        } else if (input == "size") {
            cout << q.size() << "\n";
        } else if (input == "empty") {
            cout << q.empty() << "\n";
        } else if (input == "front") {
            if (q.empty()) {
                cout << "-1\n";
                continue;
            }
            cout << q.front() << "\n";
        } else if (input == "back") {
            if (q.empty()) {
                cout << "-1\n";
                continue;
            }
            cout << q.back() << "\n";
        }
    }
    return 0;
}