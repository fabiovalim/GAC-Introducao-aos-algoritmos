#include <iostream>

using namespace std;

int main() {
    int vet[15], i;

    for(i=0; i<15; i++)
        cin >> vet[i];

    int maior;
    maior = vet[0];
    for(i=1; i<15; i++) {
        if(vet[i]>maior)
            maior = vet[i];
    }

    for(i=0; i<15; i++)
        cout << vet[i]/maior << " ";

    return 0;
}