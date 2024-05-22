#include <iostream>
using namespace std;

int main() {
    int res = 0, x;
    cin >> x;
    while (x) {
        if (x%2!=0) res++;
        x /= 2;
    }
    cout << res;
    return 0;
}