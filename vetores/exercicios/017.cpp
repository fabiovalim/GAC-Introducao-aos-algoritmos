#include <iostream>

using namespace std;

int main() {
    int vetA[5], vetB[5], i;

    for(i=0; i<5; i++)
        cin >> vetA[i];

    for(i=0; i<5; i++)
        cin >> vetB[i];

    int cont=0, j;

    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            if(vetA[i]==vetB[j]) {
                cont++;
                j=5;
            }
        }
    }

    if(cont==0) {
        cout << "VAZIO" << endl;
        return 0;
    }

    int vetC[cont], pos=0;
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            if(vetA[i]==vetB[j]) {
                vetC[pos] = vetA[i];
                pos++;
                j=5;
            }
        }
    }

    for(i=0; i<cont; i++)
        cout << vetC[i] << " ";


    return 0;
}