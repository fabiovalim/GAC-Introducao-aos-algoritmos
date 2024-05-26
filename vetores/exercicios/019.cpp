#include <iostream>

using namespace std;

int main() {
    int vet[10], i;

    for(i=0; i<10; i++)
        cin >> vet[i];

    int maior, posMaior, menor, posMenor;
    
    maior=vet[0];
    posMaior=0;
    for(i=1; i<10; i++) {
        if(vet[i] > maior) {
            maior = vet[i];
            posMaior = i;
        }
    }

    cout << maior << " " << posMaior << endl;

    menor=vet[0];
    posMenor=0;
    for(i=1; i<10; i++) {
        if(vet[i] < menor) {
            menor = vet[i];
            posMenor = i;
        }
    }

    cout << menor << " " << posMenor << endl;

    return 0;
}