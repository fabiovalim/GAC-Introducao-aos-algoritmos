#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string arquivo;
    char letra;
    int q=0;

    cin >> arquivo;

    ifstream leitura(arquivo);
    
    while(leitura >> letra) {
        q++;
    }

    cout << q << endl;

    return 0;
}