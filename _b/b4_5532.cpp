#include <iostream>
using namespace std;

int main() {
    int l, a, b, c, d;
    cin >> l >> a >> b >> c >> d;

    a = (a + c - 1) / c;
    b = (b + d - 1) / d;
    
    if (a>b) l -= a;
    else l-= b;
    cout << l;
    return 0;
}