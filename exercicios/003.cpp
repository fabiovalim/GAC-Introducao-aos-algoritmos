#include <iostream>

using namespace std;

int absoluto(int a) {
    if(a>=0)
        return a;
    else
        return (-1)*a;
}

int main() {
    int tamanho;
    cin >> tamanho;

    int v[tamanho], i;

    for(i=0; i<tamanho; i++)
        cin >> v[i];

    for(i=0; i<tamanho; i++)
        cout << absoluto(v[i]) << " ";

    return 0;
}