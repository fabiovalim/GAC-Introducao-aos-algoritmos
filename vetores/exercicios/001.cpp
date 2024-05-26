#include <iostream>

using namespace std;

int main(){
    double vet[7];
    double media, soma=0;
    double maiorTemp;
    int total=0;

    for(int i=0; i<7; i++){
        cin >> vet[i];
        soma += vet[i];
    }

    media = soma / 7.0;

    for(int i=0; i<7; i++){
        if(vet[i]>media){
            total++;
        }
    }

    maiorTemp = vet[0];
    for(int i=1; i<7; i++){
        if(vet[i]>maiorTemp){
            maiorTemp = vet[i];
        }
    }

    cout << media << endl;
    cout << total << endl;
    cout << maiorTemp << endl;

    return 0;
}