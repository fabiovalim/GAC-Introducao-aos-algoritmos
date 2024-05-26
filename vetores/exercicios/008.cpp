#include <iostream>

using namespace std;

int main() {
    int vet[20], i, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0;

    for(i=0; i<20; i++)
        cin >> vet[i];

    for(i=0; i<20; i++) {
        if(vet[i]==1)
            cont1++;
        else if(vet[i]==2)
            cont2++;
        else if(vet[i]==3)
            cont3++;
        else if(vet[i]==4)
            cont4++;
        else if(vet[i]==5)
            cont5++;
        else
            cont6++;
    }

    cout << "1: " << cont1 / 20.0 << endl;
    cout << "2: " << cont2 / 20.0 << endl;
    cout << "3: " << cont3 / 20.0 << endl;
    cout << "4: " << cont4 / 20.0 << endl;
    cout << "5: " << cont5 / 20.0 << endl;
    cout << "6: " << cont6 / 20.0 << endl;



    return 0;
}