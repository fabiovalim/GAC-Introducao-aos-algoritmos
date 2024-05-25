#include <iostream>
#include <fstream>

using namespace std;

void romano(int num) {
    int unidade, dezena;

    unidade = num%10;
    dezena = num/10;

    switch(dezena) {
        case 1: cout << "X";
            break;
        case 2: cout << "XX";
            break;
        case 3: cout << "XXX";
            break;
        case 4: cout << "XL";
            break;
        case 5: cout << "L";
            break;
    }

    switch(unidade) {
        case 1: cout << "I";
            break;
        case 2: cout << "II";
            break;
        case 3: cout << "III";
            break;
        case 4: cout << "IV";
            break;
        case 5: cout << "V";
            break; 
        case 6: cout << "VI";
            break;
        case 7: cout << "VII";
            break;
        case 8: cout << "VIII";
            break;
        case 9: cout << "IX";
            break;
    }

}

int main() {
    int num;     

    ofstream arquivo("dados.txt");
    ifstream leitura("dados.txt");

    while(num > 0) {
        cin >> num;
        if(num > 0)
            arquivo << num << endl;
    }

    while(leitura >> num) {
        if(num <= 50) {
            romano(num);
            cout << endl;
        } else {
            cout << "NUMERO INVALIDO" << endl;
        }
    }

    return 0;
}