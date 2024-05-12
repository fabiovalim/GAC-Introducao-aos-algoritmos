#include <iostream>

using namespace std;

int reverso(int num) {
    int invertido = 0, digito;

    while(num > 0) {
        digito = (num%10);

        invertido = (invertido*10) + digito;

        num/=10;
    }

    return invertido;
}

int main() {
    int num;

    cin >> num;
    cout << reverso(num);
    
    return 0;
}