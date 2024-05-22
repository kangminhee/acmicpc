#include <iostream>
using namespace std;

class cake {
public:
    int x;
    int y;
    int z;
    void input();
    void print();
};

int main() {
    cake a;
    cake c;
    a.input();
    c.input();
    cake b;
    b.x = c.x-a.z;
    b.y = c.y/a.y;
    b.z = c.z-a.x;
    b.print();
}

void cake::input() {
    cin >> this->x >> this->y >> this->z;
    return;
}

void cake::print() {
    cout << this->x << " " << this->y << " " << this->z;
    return;
}