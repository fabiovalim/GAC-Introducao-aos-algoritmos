#include <iostream>

using namespace std;

int main() {
    int vet[9], i;

    for(i=0; i<9; i++)
        cin >> vet[i];

    int n=1, cont=0;
    for(i=0; i<9; i++) {
        while(n<=vet[i]){
            if(vet[i]%n==0)
                cont++;
            n++;
        }

        if(cont==2) {
            cout << vet[i] << " " << i << endl;
        }

        n=1;
        cont=0;
    }


    return 0;
}