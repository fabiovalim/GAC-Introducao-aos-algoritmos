#include <iostream>

using namespace std;

void piramide(int n) {
    int i, vet[n];
    int control = 1;

    for(i=0; i<n; i++) {
        vet[i] = (i+1);
    }

    while(control<=n) {
        for(i=0; i<control; i++) {
            cout << vet[i] << " ";
        }
        cout << endl;

        control ++;
    }
}

int main() {
    int n;

    cin >> n;
    piramide(n);

    return 0;
}