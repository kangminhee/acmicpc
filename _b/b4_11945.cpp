#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    char l[m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> l[j];
        }
        for (int j = m - 1; j >= 0; j--) {
            cout << l[j];
        }
        cout << endl;
    }
    return 0;
}