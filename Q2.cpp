#include <iostream>
using namespace std;

struct Color {
    int red, green, blue;
};

int main() {
    Color colors[5] = {
        {120, 60, 200},
        {255, 100, 0},
        {0, 255, 128},
        {75, 75, 75},
        {10, 20, 30}
    };

    // Invert first 3 colors
    for (int i = 0; i < 3; i++) {
        colors[i].red   = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue  = 255 - colors[i].blue;
    }

    cout << "Inverted color values:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << " -> "
             << "R: " << colors[i].red << ", "
             << "G: " << colors[i].green << ", "
             << "B: " << colors[i].blue << endl;
    }

    return 0;
}

