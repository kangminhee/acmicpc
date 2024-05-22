#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    deque<int> dq;
    string in;

    for (int i = 0; i < n; i++) {
        cin >> in;
        if (in == "push_front") {
            int x; cin >> x;
            dq.push_front(x);
        } else if (in == "push_back") {
            int x; cin >> x;
            dq.push_back(x);
        } else if (in == "pop_front") {
            if (dq.empty()) {
                cout << "-1\n";
                continue;
            }
            cout << dq.front() << "\n";
            dq.pop_front();
        } else if (in == "pop_back") {
            if (dq.empty()) {
                cout << "-1\n";
                continue;
            }
            cout << dq.back() << "\n";
            dq.pop_back();
        } else if (in == "size") {
            cout << dq.size() << "\n";
        } else if (in == "empty") {
            cout << dq.empty() << "\n";
        } else if (in == "front") {
            if (dq.empty()) {
                cout << "-1\n";
                continue;
            }
            cout << dq.front() << "\n";
        } else if (in == "back") {
            if (dq.empty()) {
                cout << "-1\n";
                continue;
            }
            cout << dq.back() << "\n";
        }
    }
    return 0;
}