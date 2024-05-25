#include <iostream>
#include <cmath>

using namespace std;

void phideas(int n) {
    double x = sqrt(1);
    double phi = 0;

    for(int i=0; i<n; i++) {
        phi = sqrt(phi + x);
    }

    cout << phi;
}

int main() {
    int termos;

    cin >> termos;
    phideas(termos);

    return 0;
}