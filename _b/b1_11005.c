#include <stdio.h>
#include <string.h>

int main() {
    int N, B, tmp, i=0;
    scanf("%d %d", &N, &B);
    char list[31] = {0};
    while (1) {
        tmp = N % B;
        if (tmp >= 10) {
            list[i++] = tmp+55;
            list[i] = '\0';
        }
        else {
            list[i++] = tmp+48;
            list[i] = '\0';
        }
        N/=B;
        if (N == 0) break;        
    }
    int listlen = strlen(list);
    for (int k = listlen-1; k>=0; k--) {
        printf("%c", list[k]);
    }
    return 0;
}