#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s;
    while (n--) {
        cin >> s;
        int so = 0, de = 0, numb = 0, len;
        len = s.length();
        if (len > 10) continue;
        for (int i = 0; i < len; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') de++;
            else if (s[i] >= 'a' && s[i] <= 'z') so++;
            else if (s[i] >= 48 && s[i] <= 57) numb++;
        }
        if (de > so) continue;
        else if (len - numb == 0) continue;
        else {
            cout << s;
            return 0;
        }
    }
    return 0;
}