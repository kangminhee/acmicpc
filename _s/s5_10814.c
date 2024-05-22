#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[101];
} member;

int comp (const void * first, const void * second) {
    int firstage = ((member *)first)->age;
    int secondage = ((member *)second)->age;
    if (firstage > secondage) return 1;
    else if (firstage < secondage) return -1;
    else return 0;
    }


int main() {
    int n; 
    scanf("%d", &n);
    member *memberlist = (member *) malloc (sizeof(member) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &memberlist[i].age, memberlist[i].name);
    }
    qsort(memberlist, n, sizeof(member), comp);
    for (int i = 0; i < n; i++) {
        printf("%d %s\n", memberlist[i].age, memberlist[i].name);
    }
    
    return 0;
}