#include <iostream>
using namespace std;

int main() {
    int walk, bus, train;
    cin >> walk >> bus >> train;
    
    if (train == bus) {
        cout << "Anything";
    } else if (train > bus) {
        cout << "Bus";
    } else {
        cout << "Subway";
    }

    return 0;

}