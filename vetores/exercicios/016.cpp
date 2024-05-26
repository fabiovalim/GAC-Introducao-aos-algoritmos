#include <iostream>

using namespace std;

int main() {
    int vetA[5], vetB[5], i, j;

    for(i=0; i<5; i++)
        cin >> vetA[i];

    for(i=0; i<5; i++)
        cin >> vetB[i];

    int cont=0;
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            if(vetB[i]==vetA[j]) {
                cont++;
            }
        }
    }

    int tamanho = 10 - cont;
    int vetC[tamanho], pos=5;

    for(i=0; i<5; i++)
        vetC[i] = vetA[i];

    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            if(vetB[i]==vetA[j]) {
                j=5;
            } else if(vetB[i]!=vetA[j] and j==4) {
                vetC[pos] = vetB[i];
                pos++;
                j=5;
            }
        }
    }
    
    for(i=0; i<tamanho; i++)
        cout << vetC[i] << " ";

    return 0;
}