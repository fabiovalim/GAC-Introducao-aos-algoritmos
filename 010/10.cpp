#include <iostream>

using namespace std;

int somaDigitos(int num) {
    int soma = 0;
    
    while (num != 0) {
        soma = soma + (num % 10);
        
        num = num / 10;
    }
    
    return soma;
}

bool harshad(int num) {

    if(num % somaDigitos(num) == 0)
        return true;
    else 
        return false;
}

int main() {
    int num;

    cin >> num;

    if(harshad(num)==true)
        cout << num % somaDigitos(num) << " sim" << endl;
    else
        cout << num % somaDigitos(num) << " nao" << endl;

    return 0;
}