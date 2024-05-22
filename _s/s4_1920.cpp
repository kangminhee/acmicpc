#include <iostream>
#include <algorithm>
using namespace std;

int n, m, seek, result, where;
int A[101010] = {};

int BinarySearch(int start, int end) {
    while (start <= end){
        where = (start + end)/2;
        if (A[where] ==  seek) return 1;
        
        if (A[where] < seek) {start = where + 1;}
        else { end = where - 1;}
    }
    return 0;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(A, A+n);
    cin >> m;
    for (int i = 0; i < m; i++) {
        result = 0;
        cin >> seek;
        result = BinarySearch(0, n-1);
        cout << result << "\n";
    }
    return 0;
}