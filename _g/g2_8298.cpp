#include <iostream>
using namespace std;

int main() {
    int n, m, res = 0; cin >> n >> m;
    char c;
    int * list = new int[n];

    cin >> c;
    if (c == 'R') list[0] = m;
    else list[0] = -1;
    for (int i = 1; i < n; i++) {
        cin >> c;
        if (c == 'R') list[i] = list[i-1] + m;
        else list[i] = list[i-1] - 1;
    }

    for (int i = 0; i < n; i++) {
        if ( res > n - i - 1 ) break;
        for (int j = n - 1; j > i; j--) {
            if (list[i] == list[j]) {
                if (j - i > res) res = j - i;
            }
        }
    }

    cout << res;
    
    return 0;
}