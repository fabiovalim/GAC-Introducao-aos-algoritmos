#include <iostream>

using namespace std;

float fatorial(int n) {
    float fat=1;
    
    while(n>=1) {
        fat = fat * n;

        n--;
    }

    return fat;
}   


int main() {
    int n, i;
    float precisao=0;

    cin >> n;

    for(i=0; i<n; i++) {
        precisao += 1/fatorial(i);
    }

    cout << precisao;

    return 0;
}