#include <iostream>

using namespace std;

float Maximo(float a, float b){
    if(a>b)
        return a;
    else 
        return b;
}

int main() {
    float a, b;

    cin >> a >> b;
    cout << Maximo(a, b);

    return 0;
}