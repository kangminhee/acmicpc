#include <iostream>
using namespace std;

int l[1010101];

void f(int x);

int main() {
    int x; cin >> x;

    if (x == 1) { cout << 0; return 0; }

    for (int i = 2; i <= x; i++) {
        l[i] = l[i-1] + 1;
        if (!(i%3)) {
            l[i] = min(l[i], l[i/3] + 1);
        }
        if (!(i%2)) {
            l[i] = min(l[i], l[i/2] + 1);
        }
    }
    // for (int i = 1; i <= x; i++) {
    //     cout << l[i] << " ";
    // }

    cout << l[x];
    return 0;
}
