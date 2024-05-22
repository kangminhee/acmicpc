#include <iostream>

int main() {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int tmp;
        std::cin >> tmp;
        sum += tmp;
    }
    std::cout << sum;
    return 0;
}