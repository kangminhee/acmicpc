#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int result = 0;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
            result += 1;
        }
        
    }
    cout << result;
    return 0;
}