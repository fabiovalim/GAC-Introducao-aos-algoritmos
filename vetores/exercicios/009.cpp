#include <iostream>

using namespace std;

int main() {
    int refeicoes[10], i;
    string clientes[10];

    for(i=0; i<10; i++)
        cin >> clientes[i];

    for(i=0; i<10; i++)
        cin >> refeicoes[i];

    int n;
    for(i=0; i<10; i++) {
        n = refeicoes[i]/10;

        if(refeicoes[i] >= (n*10+n))
            refeicoes[i] = (refeicoes[i]-n);
        else
            refeicoes[i] = (refeicoes[i]-(n-1));
    }

    for(i=0; i<10; i++) {
        cout << clientes[i] << " " << refeicoes[i] << endl;
    }


    return 0;
}