#include <iostream>

using namespace std;

int main() {
    int a, b, num=0;

    cin >> a >> b;

    while (b<=a) {
        a = a - b;
        
        num = num + 1;
    }

    cout << num << endl;

    return 0;
}