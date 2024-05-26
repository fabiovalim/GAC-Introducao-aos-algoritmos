#include <iostream>

using namespace std;

int main() {
    int i, reservaBus, cont=0;
    string vagas[8], reserva;

    for(i=0; i<8; i++)
        vagas[i] = "disponivel";

    while(reserva!="fim") {
        cin >> reserva >> reservaBus;

        if(vagas[reservaBus]=="disponivel")
            vagas[reservaBus] = reserva;
        else
            cont++;
    }

    for(i=0; i<8; i++)
        cout << vagas[i] << endl;

    cout << (cont-1) << endl;

    return 0;
}