#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int h, w, n, ah, aw;
        cin >> h >> w >> n;
        ah = (n - 1) % h + 1;
        aw = (h + n - 1) / h;
        cout << ah * 100 + aw << endl;
    }
    return 0;
}