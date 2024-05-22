#include <stdio.h>
#include <string.h>

int tmp, res;

int recursion(const char *s, int l, int r){
    tmp++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int time;
    scanf("%d", &time);
    char s[1001] = {};

    for (int repeat = 0; repeat < time; repeat++) {
        tmp = 0;
        scanf("%s", s);
        res = isPalindrome(s);
        printf("%d %d\n", res, tmp);
    }
}
