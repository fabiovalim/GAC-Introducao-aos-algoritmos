#include <iostream>
#include <iomanip>

using namespace std;

float inclinacao(int altura, int base) {
    float inclinacao;

    inclinacao = (altura * 100) / float(base);

    return inclinacao;
}

int main() {
    int n, altura, base, cont=0, i;

    cin >> n;
    
    float inc[n];

    for(i=0; i<n; i++) {
        cin >> altura >> base;

        if(inclinacao(altura, base)<=8)
            cont++;

        inc[i] = inclinacao(altura, base);
    }

    for(i=0; i<n; i++)
        cout << inc[i] << endl;

    cout << cont;
    
    return 0;
}