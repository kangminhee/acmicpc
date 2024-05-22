#include <stdio.h>
#include <stdlib.h>

int compf(const void* first, const void* second) {
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

int main () {
    int n, mid, comp, min=200001, res;
    scanf("%d", &n);
    int *ar = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i<n; i++) {
        scanf("%d", &ar[i]);
    }
   	qsort(ar, n, sizeof(int), compf);
    mid = (ar[0]+ar[n-1])/2;
    for (int i = n-1; i>=0; i--) {
        
        comp = ar[i]-mid;
        if (comp<0) comp*=-1;

        if (comp < min) {
            min = comp;
            res = ar[i];
        }
    }
    printf("%d", res);
    free(ar);
    return 0;
}