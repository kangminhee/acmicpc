#include <bits/stdc++.h>
using namespace std;

typedef struct coor {
    int x; int y;
} coor;

int comp(const void *first, const void *second) {
    coor *a = (coor*)first;
    coor *b = (coor*)second;
    
    if (a->y > b->y) return 1;
    else if (a->y < b->y) return -1;
    else {
        if (a->x > b->x) return 1;
        else if (a->x < b->x) return -1;
        else return 0;
    }
}

int main() {
    int n; cin >> n;
    coor list[101010] = {};

    int last = 0, res = 0;

    for (int i = 0; i < n; i++) {
        cin >> list[i].x >> list[i].y;
    }
    qsort(list, n, sizeof(list[0]), comp);

    for (int i = 0; i < n; i++) {
        if (last <= list[i].x) {
            last = list[i].y;
            ++res;
        }
    }
    cout << res;
    
}