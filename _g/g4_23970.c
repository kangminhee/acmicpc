#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *list = (int *) malloc (sizeof(int) * n);
    int *comp = (int *) malloc (sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &comp[i]);
    }

    for (int i = 0; i < n; i++) {
        if (list[i] != comp[i]) break;
        else if ((i == n-1) && (list[i]==comp[i])) {
            printf("%d", 1);
            return 0;
        }
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n-1; i++) {
            for (int k = 0; k<n; k++) {
                if (list[k] < list[k+1]) continue;
                if (k == n-1) {
                    if (list[k] < list[k+1]) {
                        printf("%d", 0);
                        return 0;}
                }
            }
            if (list[i]>list[i+1]) {
                int tmp = list[i];
                list[i] = list[i+1];
                list[i+1] = tmp;

                for (int k = 0; k < n; k++) {
                    if (list[k]!=comp[k]) {
                        break;
                    }
                    if ((k == n-1)&&(list[k]==comp[k])) {
                        printf("%d", 1);
                        return 0;
                    }
                }
            }
        }
    }

    printf("%d", 0);

    return 0;
}