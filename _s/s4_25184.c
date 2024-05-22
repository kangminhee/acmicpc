#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, n, start;
    scanf("%d", &N);
	if (N==1) {
		printf("1");
		return 0;
	}
    n = N/2;
    int * list = (int *)malloc(sizeof(int)*N);
    list[0] = n;
    start = n;
    for (int i = 1; i < N; i++) {
        if (list[i-1]+n <= N) {
            list[i] = list[i-1] + n;
        }
        else {
            list[i] = --start;
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", list[i]);
        // if (i!=N-1) printf("%d ", list[i]-list[i+1]);
    }
    free(list);
    return 0;
}
