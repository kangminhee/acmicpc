#include <stdio.h>

int main() {
    long long fibo[91];
    int n;
    scanf("%d", &n);
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i<=n; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    printf("%lld", fibo[n]);
    return 0;
}