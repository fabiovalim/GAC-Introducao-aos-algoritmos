#include <iostream>

using namespace std;

float centPmetro(float n) { //transformar um valor de centimetros para metros
    float metros;

    metros = n / 100.00;

    return metros;
}

float metroPcent(float n) { //transformar um valor de metros para centimetros
    float cent;

    cent = n * 100.0;

    return cent;
}

int main() {
    float valor;
    string conversao;

    cin >> valor;
    cin >> conversao; //indica para qual unidade devera ser convertida

    if(conversao=="centimetro")
        cout << metroPcent(valor) << " cm" << endl;
    else if(conversao=="metro")
        cout << centPmetro(valor) << " m" << endl;
    else 
        cout << "ERRO" << endl;

    return 0;
}