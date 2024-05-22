#include <stdio.h>

int main() {
    int n, res=1, i=0;
    scanf("%d", &n);
    n--;
    while(1) {
        n -= i * 6;
        i++;
        if (n/6>0 || n%6>0) {
            res++;
        }
        else {
            break;
        }
    }
    printf("%d", res);
 
    return 0;
}