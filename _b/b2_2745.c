#include <stdio.h>
#include <string.h>

int main() {
    char N[30] = {0};
    int B, Nlen;
    long res =0;
    scanf("%s %d", N, &B);
    int BBB = 1;
    Nlen = strlen(N);

    for (int i = Nlen-1; i >= 0; i--) {
        if (N[i]>=48 && N[i]<=57) {
            res += (N[i]-48) * BBB;
        }
        else if (N[i]>=65 && N[i]<=90) {
            res += (N[i]-55) * BBB;
        }
        BBB *= B;
    }
    printf("%ld", res);

    return 0;
}