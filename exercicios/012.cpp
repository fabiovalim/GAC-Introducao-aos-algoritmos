#include <iostream>

using namespace std;

string probOlho(string pai, string mae, string filho) {
    string prob;

    if(pai=="Marrom" and mae=="Marrom" and filho=="Verde")
        prob = "8.33%";
    else if(pai=="Marrom" and mae=="Marrom" and filho=="Azul")
        prob = "2.78%";
    else if(pai=="Marrom" and mae=="Verde" and filho=="Verde")
        prob = "27.78%";
    else if(pai=="Marrom" and mae=="Verde" and filho=="Azul")
        prob = "5.56%";
    else if(pai=="Marrom" and mae=="Azul" and filho=="Verde")
        prob = "16.67%";
    else if(pai=="Marrom" and mae=="Azul" and filho=="Azul")
        prob = "16.67%";
    else if(pai=="Verde" and mae=="Marrom" and filho=="Verde")
        prob = "27.78%";
    else if(pai=="Verde" and mae=="Marrom" and filho=="Azul")
        prob = "5.56%";
    else if(pai=="Verde" and mae=="Verde" and filho=="Verde")
        prob = "88.64%";
    else if(pai=="Verde" and mae=="Verde" and filho=="Azul")
        prob = "10.86%";
    else if(pai=="Verde" and mae=="Azul" and filho=="Verde")
        prob = "66.42%";
    else if(pai=="Verde" and mae=="Azul" and filho=="Azul")
        prob = "33.08%";
    else if(pai=="Azul" and mae=="Marrom" and filho=="Verde")
        prob = "16.67%";
    else if(pai=="Azul" and mae=="Marrom" and filho=="Azul")
        prob = "16.67%";
    else if(pai=="Azul" and mae=="Verde" and filho=="Verde")
        prob = "66.42%";
    else if(pai=="Azul" and mae=="Verde" and filho=="Azul")
        prob = "33.08%";
    else if(pai=="Azul" and mae=="Azul" and filho=="Verde")
        prob = "0.50%";
    else if(pai=="Azul" and mae=="Azul" and filho=="Azul")
        prob = "99%";
    else
        prob = "ERRO";

    return prob;
}

int main() {
    string olhoPai, olhoMae, olhoFilho;

    cin >> olhoPai >> olhoMae >> olhoFilho;

    cout << probOlho(olhoPai, olhoMae, olhoFilho) << endl;

    return 0;
}