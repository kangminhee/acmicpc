#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    string str;
    getchar();
    for (int i = 1; i <= n; i++) {
        getline(cin, str);
        cout << i << ". " << str << endl;
    }
    return 0;
}