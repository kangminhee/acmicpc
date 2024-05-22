#include <stdio.h>

int main( ) {
    int n, m, x, y;
    int list[101010] = {};
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &list[i]);
        list[i] += list[i-1];
    }
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &x, &y);
        printf("%d\n", list[y]-list[x-1]);
    }
    return 0;
}