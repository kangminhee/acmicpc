#include <bits/stdc++.h>
using namespace std;

#define MAX 10101

typedef struct ming {
    int x;
    int y;
    int job;
} ming;

int comp(const void *first, const void *second) {
    ming *a = (ming*)first;
    ming *b = (ming*)second;
    
    if (a->y < b->y) return 1;
    else if (a->y > b->y) return -1;
    else {
        if (a->x < b->x) return 1;
        else if (a->x > b->x) return -1;
        else {
            if (a->job > b->job) return 1;
            else if (a->job > b->job) return -1;
        }
    }
    return 0;
}

int main() {
    int n; cin >> n;
    ming list[MAX] = {};

    for (int i = 0; i < n; i++) {
        cin >> list[i].x >> list[i].y;
        list[i].job = i+1;
    }

   qsort(list, n, sizeof(list[0]), comp);
    for (int i = 0; i < n; i++) {
        cout << list[i].job << " ";
    }
}