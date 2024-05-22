#include <iostream>
#include <string.h>
using namespace std;

long long tmp, res;

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
    cin >> time;
    cin.ignore();
    char s[1001] = {};

    for (int repeat = 0; repeat < time; repeat++) {
        tmp = 0;
        cin.getline(s, 1000, '\n');
        res = isPalindrome(s);
        cout << res << " " << tmp;
        if (repeat != time) cout << "\n";
    }
}
