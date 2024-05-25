#include <iostream>

using namespace std;

int main() {
    int n, div=1, soma=0;

    cin >> n;

    while(n!=div) {
        if(n%div==0) {
            cout << div << "+";

            soma = soma + div;
        }

        div++;
    }

    cout << n << "=" << soma + n;

    return 0;
}