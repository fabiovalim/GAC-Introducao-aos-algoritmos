#include <iostream>

using namespace std;

double fatorial(int a) {
    double fatorial = 1;
    while(a >= 1) {
        fatorial *= a;
        a--;
    }
    return fatorial;
}

int main() {
    int n, p, combinacao;

    cin >> n >> p;

    combinacao = fatorial(n) / (fatorial(p) * fatorial(n-p));
    cout << combinacao;

    return 0;
}