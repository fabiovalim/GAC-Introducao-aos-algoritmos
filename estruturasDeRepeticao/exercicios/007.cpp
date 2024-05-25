#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string arquivo, palavra, teste;
    int q=0;

    cin >> arquivo >> palavra;

    ifstream leitura(arquivo);

    while(leitura >> teste) {
        if(teste==palavra) {
            q++;
        }
    }

    cout << q << endl;

    return 0;
}