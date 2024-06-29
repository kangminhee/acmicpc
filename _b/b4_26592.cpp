#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    float area, base;
    for (int i = 0; i < n; i++) {
        scanf("%f %f", &area, &base);
        printf("The height of the triangle is %.2f units\n", 2*area/base);
        }
    return 0;
}