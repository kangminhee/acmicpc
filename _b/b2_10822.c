#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[101];
    scanf("%s", input);
    char *token;
    int sum = 0;

    token = strtok(input, ",");
    while (token != NULL) {
        sum += atoi(token);
        token = strtok(NULL, ",");
    }

    printf("%d", sum);
    return 0; 
}
