#include <stdio.h>

int main() {
    int n, now=0, res=665;
    scanf("%d", &n);
    while (now != n) {
        res++;
        if (res%1000 == 666) {
            now++;
        }
        else if ((res/10)%1000 == 666) {
            now++;
        }
        else if ((res/100)%1000 == 666) {
            now++;
        }
        // else if ((res/1000)%1000 == 666) {
        //     now++;
        // }
        else {
        }
    }
    printf("%d", res);
    return 0;
}