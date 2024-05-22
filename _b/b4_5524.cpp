#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                cout << (char)(s[i]-'A'+'a');
            } else {
                cout << s[i];
            }
        }
        cout << endl;
    }
}