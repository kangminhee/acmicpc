#include <bits/stdc++.h>
using namespace std;

typedef struct {
    short shorter;
    short taller;
} ming;

int main() {
    int n, m; cin >> n >> m;
    int list[33000] = {};
    vector<ming> v;
    for (int i = 0; i < m; i++) {
        ming * tmp = new ming;
        cin >> tmp->shorter >> tmp->taller;
        v.push_back(tmp);
        ++list[tmp->taller];
    }
}