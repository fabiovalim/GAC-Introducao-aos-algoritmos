#include <iostream>

using namespace std;

int main() {
    int i, n;
    float vet[16], soma=0;

    for(i=0; i<16; i++)
        cin >> vet[i];

    cin >> n;

    for(i=0; i<n; i++)
        soma += vet[i];

    cout << soma;

    return 0;
}