#include <iostream>
using namespace std;

int main() {
    int age, weight;
    string name;
    cin >> name >> age >> weight;
    while (name != "#") {
        cout << name << " ";
        if (age > 17 || weight >= 80) cout << "Senior\n";
        else cout << "Junior\n";
        cin >> name >> age >> weight;
    }

    return 0;
}