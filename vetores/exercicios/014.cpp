#include <iostream>

using namespace std;

int main() {
    int vet[9], i, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0;

    for(i=0; i<9; i++) {
        cin >> vet[i];

        if(vet[i]==1)
            cont1++;
        else if(vet[i]==2)
            cont2++;
        else if(vet[i]==3)
            cont3++;
        else if(vet[i]==4)
            cont4++;
        else
            cont5++;
    }

    cout << "5: " << cont5 / float(9.0) << endl;
    cout << "4: " << cont4 / float(9.0) << endl;
    cout << "3: " << cont3 / float(9.0) << endl;
    cout << "2: " << cont2 / float(9.0) << endl;
    cout << "1: " << cont1 / float(9.0) << endl;

    return 0;
}