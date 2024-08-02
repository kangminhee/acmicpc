#include <iostream>
using namespace std;
using ll = long long;

ll n, res, arr[1010101], tmparr[1010101];

void mergesort(int l, int r) {
    if (l == r) return;
    int mid = (l + r)/2;
    mergesort(l, mid);
    mergesort(mid+1, r);
    
    int a = l, b = mid + 1, c = l;
    
    while (a <= mid && b <= r) {
        if (arr[a] <= arr[b]) { tmparr[c++] = arr[a++]; }
        else { tmparr[c++] = arr[b++]; res += (mid - a + 1); }
    }
    if (a > mid) {
        for (int i = b; i <= r; i++) { tmparr[c++] = arr[i]; }
    }
    else {
        for (int i = a; i <= mid; i++) { tmparr[c++] = arr[i]; }
    }
    for (int i = l; i <= r; i++) {
        arr[i] = tmparr[i];
    }
    
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mergesort(0, n-1);
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";
    cout << res;
    return 0;
}