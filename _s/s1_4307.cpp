#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, l, n, tmp, tmp_long, tmp_short, time_long, time_short;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> l >> n;
        tmp_long = time_long = tmp_short = time_short = 0;
        for (int i = 1; i <= n; i++) {
            cin >> tmp;
            if (tmp > l/2) {
                tmp_long = tmp;
                tmp_short = l - tmp;
            } else {
                tmp_long = l - tmp;
                tmp_short = tmp;
            }
            if (tmp_short > time_short) {
                time_short = tmp_short;
            }
            if (tmp_long > time_long) {
                time_long = tmp_long;
            }
        }
        cout << time_short << " " << time_long << "\n";
    }
}