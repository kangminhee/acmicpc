#include <stdio.h>
#include <stdlib.h>

int comp(const void* first, const void* second) {
    int n1 = *((int *)first);
    int n2 = *((int *)second);
    
    if (n1 > n2) {
        return 1;
    }
    else if (n1 < n2) {
        return -1;
    }
    else {
        return 0;
    }
}

int main() {
    int n, min=0, comp_value, res, tmp, dif;
    scanf("%d", &n);
    
    int *ar = (int *)malloc(sizeof(int) * n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    qsort(ar, n, sizeof(int), comp);

    for (int i = 0; i < n; i++) { // 여기를 수정했습니다.
        comp_value = ar[i]; // 이름을 변경했습니다.
        tmp = 0;
        for (int j = 0; j < n; j++) {
            dif = ar[j] - comp_value;
            if (dif < 0) {
                dif *= -1;
            }
            tmp += dif;
        }
        if (min == 0 || min > tmp) {
            min = tmp;
            res = comp_value;
        }
    }

    printf("%d", res);
    free(ar); // 메모리 할당 해제를 추가했습니다.
    return 0;
}
