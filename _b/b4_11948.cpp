#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int l[6] = {}, res = 0;
    for (int i = 0; i < 6; i++) {
        cin >> l[i];
    }
    sort(l, l+4);
    for (int i = 1; i < 4; i++) {
        res += l[i];
    }
    res += max(l[4], l[5]);
    cout << res;
    return 0;
}