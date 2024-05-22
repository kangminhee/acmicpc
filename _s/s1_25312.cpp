#include <bits/stdc++.h>
using namespace std;

struct Juice {
    int w, v;
    float r;
};

int compare(const void *first, const void *second);

int main() {
    int n, m; cin >> n >> m;
    Juice list[n];
    for (int i = 0; i < n; i++) {
        cin >> list[i].w >> list[i].v;
    }
    for (int i = 0; i < n; i++) {
        list[i].r = 1.0 * list[i].w / list[i].v;
    }
    qsort(list, sizeof(Juice), sizeof(Juice)*n, compare);

}

int compare(const void *first, const void *second) {
    if (*(float*)first.r
}