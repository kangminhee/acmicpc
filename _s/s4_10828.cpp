#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    stack<int> s;
    string input;
    for (int i = 0; i < n; i++) {
            cin >> input;
            if (input == "push") {
                int x; cin >> x;
                s.push(x);
            } else if (input == "pop") {
                if (s.empty()) {
                    cout << "-1\n";
                    continue;
                }
                cout << s.top() << "\n";
                s.pop();
            } else if (input == "size")
            {
                cout << s.size() << "\n";
            } else if (input == "empty")
            {
                cout << s.empty() << "\n";
            } else if (input == "top") {
                if (s.empty()) {
                    cout << "-1\n";
                    continue;
                }
                cout << s.top() << "\n";
            }
    }
    return 0;
}