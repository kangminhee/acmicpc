#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    char c;
    getchar();
    for (int i = 0; i < n; i++) {
        c = getchar();
        cout << c;
        int is = 0;
        while (c != '\n') {
            if (is < 0) break;
            if (c == '(') is++;
            else if (c == ')') is--;
            c = getchar();
        }
        if (is == 0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}