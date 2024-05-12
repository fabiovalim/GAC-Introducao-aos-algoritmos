#include <iostream>
#include <fstream>

using namespace std;

int multiplos3(int num) {
    if(num%3==0)
        return -1;
    else
        return num;
}

int main() {
    string arquivo;
    int num;
    remove("saida.txt");

    cin >> arquivo;
    
    ifstream leitura(arquivo);

    while(leitura >> num) {
        if(multiplos3(num)!=(-1)) {
            ofstream arq("saida.txt", ios::app);
            arq << multiplos3(num) << " ";
        }
    }

    return 0;
}