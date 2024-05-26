#include <iostream>

using namespace std;

int main() {
    int vet[5], i;

    for(i=0; i<5; i++) {
        cin >> vet[i];

        if(vet[i]<0)
            i--;
    }

    int n=1;
    while(n<=5) {
        int menor = -1;
        int p;

        for(i=0; i<5; i++) {
            if(vet[i]>=0 and (menor==(-1))) {
                menor = vet[i];
                p = i;
            }
            else if(vet[i]>=0 and vet[i]<menor) {
                menor = vet[i];
                p=i;
            }
        }

        vet[p] = -1;

        for(i=0; i<5; i++)
            cout << vet[i] << " ";
        cout << endl;

        n++;
    }

    return 0;
}