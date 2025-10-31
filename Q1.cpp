#include <iostream>
using namespace std;

struct Item {
    int id;
    float cost;
};

int main() {
    Item items[6] = {
        {101, 45.50},
        {102, 75.25},
        {103, 30.00},
        {104, 90.10},
        {0, 0.0},   // Uninitialized entries
        {0, 0.0}
    };

    cout << "Items with cost greater than 50.00:\n";
    for (int i = 0; i < 6; i++) {
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id
                 << ", Cost: " << items[i].cost << endl;
        }
    }
    return 0;
}

