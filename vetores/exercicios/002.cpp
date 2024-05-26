#include <iostream>

using namespace std;

int main() {
    int vet[10], i, soma=0;
    bool sobreviventes = true;

    for(i=0; i<10; i++)
        cin >> vet[i];

    while(sobreviventes) {
        sobreviventes = false;

        for(i=0; i<10; i++) {
            if(vet[i]>0) {
                vet[i]--;
                if(vet[i]==0) {
                    sobreviventes = true;
                    soma++;
                }
            }
        }
    }

    std::cout << soma;

    return 0;
}