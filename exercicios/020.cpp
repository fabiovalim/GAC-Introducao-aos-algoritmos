#include <iostream>

using namespace std;

void simplifica(int a, int b) {
    int div;

    if(a>b) {
        div = b;
    } else { 
        div = a;
    }

    while(a%div!=0 or b%div!=0) {
        div--;
    }

    cout << a / div << endl;
    cout << b / div << endl;
}

int main() {
    int a, b;

    cin >> a >> b;

    if(b != 0) {
        simplifica(a, b);
    }

    return 0;
}