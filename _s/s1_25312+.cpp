#include <bits/stdc++.h>
using namespace std;

typedef struct {
    long w;
    long v;
} sugar;

bool compare(const sugar a, const sugar b) {
    if (a.w*b.v != a.v*b.w) return a.v*b.w > a.w*b.v;
    else return a.w > b.w;
}

sugar items[101010];

int main() {
    long n, m, w, v; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> w >> v;
        items[i] = {w, v};
    }

    sort (items, items+n, compare);

    long res=0, a=0, b=1, abgcd=1, i = 0;

    while (m > 0) {
        sugar item = items[i];
        if (m > item.w) res += item.v;
        else {
            a = item.v * m; b = item.w;
        }
        m -= item.w;
        i++;
    }


    abgcd = gcd(a, b);
    a /= abgcd; b /= abgcd;
    // cout << res << " "<< a << " " << b << "\n";

    cout << res * b + a << "/" << b;
}

