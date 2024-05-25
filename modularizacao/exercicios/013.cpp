#include <iostream>
#include <cmath>

using namespace std;

int arredondamento(float num) {
    int arred, parte_inteira;
    parte_inteira = trunc(num);

    if(parte_inteira%2==0)
        arred = ceil(num);
    else 
        arred = floor(num);

    return arred;
}

int main() {
    float n;

    cin >> n;
    cout << arredondamento(n);

    return 0;
}