#include <iostream>
using namespace std;

class dungchi {
public:
    int weight;
    int height;
    int score;
};

int main() {
    int n; cin >> n;
    dungchi * list = new dungchi[n];
    for (int i = 0; i < n; i++) {
        int weight, height;
        cin >> weight >> height;
        list[i].weight = weight;
        list[i].height = height;
    }
    for (int i = 0; i < n; i++) {
        list[i].score = 1;
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            if ((list[i].weight < list[j].weight)&&(list[i].height < list[j].height)) {
                list[i].score += 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << list[i].score << " ";
    }
    return 0;
}