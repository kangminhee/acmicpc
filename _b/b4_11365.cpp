#include <iostream>
#include <string>
using namespace std;

int main() {
    string input = "";
    getline(cin, input);
    while (input != "END") {
        for (int i = input.length()-1; i>=0; i--) {
            cout << input[i];
        }
        cout << endl;
        getline(cin, input);
    }
    return 0;
}