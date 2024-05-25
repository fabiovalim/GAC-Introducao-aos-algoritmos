#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n, contM=0, contF=0;
    float altura, maior, menor, somaM=0, somaF=0;
    char genero;
    ofstream arquivo("dados.txt");
    ifstream leitura("dados.txt");

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> altura >> genero;
        arquivo << altura << " " << genero << endl;
    }

    leitura >> altura >> genero;

    maior = altura;
    menor = altura;

    if(genero=='m'){
        contM++;
        somaM += altura;
    } else {
        contF++;
        somaF += altura;
    }

    while(leitura >> altura >> genero){
        if(altura>maior){
            maior = altura;
        } else if(altura<menor){
            menor = altura;
        }

        if(genero=='m'){
            contM++;
            somaM += altura;
        } else if(genero=='f'){
            contF++;
            somaF += altura;
        }
    }

    cout << maior << endl;
    cout << menor << endl;
    if(contF!=0){
        cout << somaF / contF << endl;
    } else if(contF==0){
        cout << "erro" << endl;
    }
    if(contM!=0){
        cout << somaM / contM << endl;
    } else if(contM==0){
        cout << "erro" << endl;
    }
    cout << (somaM + somaF) / (contM + contF) << endl;

    return 0;
}