#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, x, y;
    int list[101010] = {};
    cin >> n >> m;
    for (int i = 1 ; i <= n; i++) {
        cin >> list[i];
        list[i] += list[i-1];
    }
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        cout << list[y] - list[x-1] << "\n";
    }
    return 0;
}