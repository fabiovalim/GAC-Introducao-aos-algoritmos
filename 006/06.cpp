#include <iostream>

using namespace std;

void metade(int n) {
    int cont=1;

    cout << n << " ";

    while(n!=1) {
        if(n % 2 != 0) {
            cout << (3*n)+1 << " ";
            n = (3*n)+1;
            cont++;
        } else {  
            cout << n/2 << " ";
            n = n/2;
            cont++;
        }
    }
    cout << endl;
    cout << cont;
}

int main() {
    int num;

    cin >> num;

    metade(num);

    return 0;
}