#include <stdio.h>

int main() {
    int T, C;
    int Q=0, D=0, N=0, P=0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &C);
        Q = C/25;
        C -= Q * 25;
        D = C/10;
        C -= D * 10;
        N = C/5;
        C -= N * 5;
        P = C;
        printf("%d %d %d %d\n", Q, D, N, P);
        Q = D = N = P = 0;
    }
    return 0;
}