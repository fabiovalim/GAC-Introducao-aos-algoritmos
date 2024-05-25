#include <iostream>

using namespace std;

int main() {
    float n, r, x=1;

    cin >> r >> n;

    cout << x << endl;

    while (n!=1) {
        x = x * r;
        cout << x << endl;

        n--;
    }

    return 0;
}