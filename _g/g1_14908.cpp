#include <bits/stdc++.h>
using namespace std;

#define MAX 10101


typedef struct {
    double x;
    int y;
} ming;

ming llist[MAX];

int comp(const void *first, const void *second) {
    ming *a = (ming*)first;
    ming *b = (ming*)second;
    
    if (a->x < b->x) return 1;
    else if (a->x > b->x) return -1;
    else {
        if (a->y > b->y) return 1;
        else if (a->y < b->y) return -1;
        else return 0;
    }
    return 0;
}

int main() {
    int n; cin >> n;
    int x, y;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        llist[i].x = 1.0 * y / x;
        llist[i].y = i+1;
    }

   qsort(llist, n, sizeof(llist[0]), comp);
    for (int i = 0; i < n; i++) {
        cout << llist[i].y << " ";
    }
}