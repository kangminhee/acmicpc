#include <iostream>
using namespace std;

int main() {
    double Emiles = 1.0;
    double Rmiles = 1.09;
    double paces = 1088;
    cin >> Emiles;
    while (Emiles != 0.0) {        
        printf("%.2f English miles equals %.2f Roman miles or %.0f paces\n", Emiles, Emiles*Rmiles, Emiles*paces);
        cin >> Emiles;
    };
}