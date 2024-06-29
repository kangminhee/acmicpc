#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int w;
    int v;
    float ratio;
} sugar;

sugar list[101010];

bool compare(const sugar a, const sugar b) {
    if (a.ratio != b.ratio) return a.ratio > b.ratio;
    else return a.w > b.w;
}

int main() {
    int n, m, w, v; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> w >> v;
        list[i] = {w, v, w/v};
    }

    sort (list, list+n, compare);

    int res = 0, a, b, abgcd, i = 0;

    while (m > 0) {
        sugar item = pq.top();
        if (m > item.w) res += item.v;
        else {
            a = item.v * m; b = item.w;
        }
        m -= item.w;
        pq.pop();
    }

    // while (m > 0 && !pq.empty()) {
    //     sugar item = pq.top();
    //     if (m > item.w) res += item.v;
    //     else {
    //         a = item.v * m; b = item.w;
    //     }
    //     m -= item.w;
    //     pq.pop();
    // }

    abgcd = gcd(a, b);
    a /= abgcd;
    b /= abgcd;

    a += b*res;

    abgcd = gcd(a, b);
    a /= abgcd;
    b /= abgcd;

    cout << a << "/" << b;

    
    return 0;
}