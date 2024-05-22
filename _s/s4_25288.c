#include <stdio.h>

int main() {
    int n;
    char str[10001];

    scanf("%d", &n);
    scanf("%s", str);

    for (int i = 0; i<n; i++) {
        printf("%s", str);
    }
    return 0;
}