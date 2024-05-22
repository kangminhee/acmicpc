#include <iostream>
using namespace std;

int main() {
    int x, y, ax=0, ay=0;
    for (int i = 0; i < 3; i++) {
        cin >> x >> y;
        ax ^= x; ay ^= y;
    }
    cout << ax << " " << ay;
    return 0;
}