#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string input; cin >> input;
    int result;
    while (input != "0") {
        result = 2;
        int len = input.length();
        for (int i = 0; i < len; i++) {
            if (input[i] == '1') result += 2;
            else if (input[i] == '0') result += 4;
            else result += 3;
            if (i != len-1) result += 1;
        }
        cout << result << "\n";
        cin >> input;
    }
    return 0;
}