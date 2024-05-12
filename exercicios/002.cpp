#include <iostream>

using namespace std;

float Media(float a, float b) {
    float media;

    media = (a + b) / 2.0;

    return media;
}

int main() {
    float x, y;

    cin >> x >> y;
    cout << Media(x, y);

    return 0;
}