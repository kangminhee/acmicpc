#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n, m;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);
        int * list = (int *) malloc (sizeof(int) * n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &list[j]);
        }
    }
}