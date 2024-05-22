#include <iostream>
using namespace std;

int main() {
    int m, d; cin >> m >> d;
    if (m == 1 || (m == 2 && d < 18)) cout << "Before";
    else if (m == 2 && d == 18) cout << "Special";
    else cout << "After";
    
    return 0;
}