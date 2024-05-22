#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k, res=0;
    scanf("%d %d", &n, &k);
    int *list = (int *) malloc (sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n-1; i++) {
            if ((list[i]>list[i+1])&&(res<k)) {
                int tmp = list[i];
                list[i] = list[i+1];
                list[i+1] = tmp;
                res++;
            }
        }
    }
    if (res < k) {
        printf("%d", -1);
        return 0;
    }

    for (int i = 0 ; i< n ; i++) {
        printf("%d", list[i]);
        if (i != n-1) printf(" ");
    }
    return 0;
}