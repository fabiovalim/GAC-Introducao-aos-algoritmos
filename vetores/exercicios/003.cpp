#include <iostream>

using namespace std;

int main() {
    int vet[10], i, tamanho2=0, tamanho3=0;

    for(i=0; i<10; i++)
        cin >> vet[i];
    
    for(i=0; i<10; i++) {
        if(vet[i]%2==0 and vet[i]%3==0) {
            tamanho2++;
            tamanho3++;
        } else if(vet[i]%2==0) {
            tamanho2++;
        } else if(vet[i]%3==0) {
            tamanho3++;
        }
    }

    int m2[tamanho2], m3[tamanho3];

    int n2=0, n3=0;
    for(i=0; i<10; i++) {
        if(vet[i]%2==0 and vet[i]%3==0) {
            m2[n2] = vet[i];
            n2++;
            m3[n3] = vet[i];
            n3++;
        } else if(vet[i]%2==0) {
            m2[n2] = vet[i];
            n2++;
        } else if(vet[i]%3==0) {
            m3[n3] = vet[i];
            n3++;
        }
    }
    

    int maior2, maior3;

    for(i=0; i<tamanho2; i++)
        cout << m2[i] << " ";
    cout << endl;

    maior2 = m2[0];
    for(i=1; i<tamanho2; i++) {
        if(m2[i]>maior2)
            maior2 = m2[i];
    }
    cout << maior2 << endl;

    for(i=0; i<tamanho3; i++)
        cout << m3[i] << " ";
    cout << endl;

    maior3 = m3[0];
    for(i=1; i<tamanho3; i++) {
        if(m3[i]>maior3)
            maior3 = m3[i];
    }
    cout << maior3 << endl;

    return 0;
}