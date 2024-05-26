#include <iostream>

using namespace std;

int main() {
    int vet[7], i, j, k, n, soma;

    for(i=0; i<7; i++)
        cin >> vet[i];

    cin >> n;

    for(i=0; i<5; i++) { //for aninhados para testar todas as possibilidades de soma
        for(j=i+1; j<6; j++) {
            for(k=j+1; k<7; k++) {
                soma = vet[i] + vet[j] + vet[k];

                if(soma==n) {
                    cout << vet[i] << " " << vet[j] << " " << vet[k] << endl;

                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;

    return 0;
}