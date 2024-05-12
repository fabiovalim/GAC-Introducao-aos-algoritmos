#include <iostream>

using namespace std;

double somaParcelas(int num) {
    double soma=0, parcela;
    int n;

    for(n=1; n<=num; n++) {
        parcela = (n*(n+1))/float((n+3));
        soma += parcela; 
    }

    return soma;
}

int main() {
    int parcelas;

    cin >> parcelas;
    cout << somaParcelas(parcelas);

    return 0;
}