#include <iostream>
#include <fstream>

using namespace std;

int minutos(int h1, int m1, int h2, int m2) {
    int tempo = 0;

    if(h2>=h1 and m2>=m1) {
        tempo += (h2-h1) * 60;
        tempo += (m2-m1);
    } else if(h1==h2 and m2<m1) {
        tempo += ((24*60)-(m1-m2));
    } else if(h2>=h1 and m2<m1) {
        tempo += ((h2-h1) * 60) - (m1-m2);
    } else if(h2<h1 and m2>=m1) {
        tempo += ((24-h1+h2) * 60) + (m2-m1);
    } else if(h2<h1 and m2<m1) {
        tempo += ((24-h1+h2) * 60) - (m1-m2);
    }

    return tempo;
}

int main() {
    int h1, m1, h2, m2;

    ofstream arquivo("horario.txt");
    ifstream leitura("horario.txt");

    while(h1!=0 or m1!=0 or h2!=0 or m2!=0) {
        cin >> h1 >> m1 >> h2 >> m2;

        if(h1!=0 or m1!=0 or h2!=0 or m2!=0) {
            arquivo << h1 << " " << m1 << " " << h2 << " " << m2 << endl;
        }
    }

    while(leitura >> h1 >> m1 >> h2 >> m2) {
        cout << minutos(h1, m1, h2, m2) << endl;
    }

    return 0;
}