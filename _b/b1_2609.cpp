#include <iostream>
using namespace std;

int main() {
    int s, l, gcd;
    cin >> s >> l;
    if (s > l) {
        int tmp = l;
        l = s;
        s = tmp;
    }

    for (int i = 1; i <= s; i++) {
        if (s%i == 0 && l%i == 0) {
            gcd = i;
        }
    }

    cout << gcd << "\n" << s*l/gcd;
    return 0;
}