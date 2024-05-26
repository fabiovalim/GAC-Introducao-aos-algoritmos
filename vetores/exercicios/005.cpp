#include <iostream>

using namespace std;

int main() {
    int i, cont=0;
    float vet[10], soma=0;

    for(i=0; i<10; i++)
        cin >> vet[i];

    for(i=0; i<10; i++) {
        if(vet[i]>=0)
            cont++;
        else 
            soma += vet[i];
    }

    cout << cont << endl;
    cout << soma << endl;

    return 0;
}