#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string arquivo, r1, r2, r3, votado;
	int votos, cont1=0, cont2=0, cont3=0;
	
	cin >> arquivo;
	
	ifstream leitura(arquivo);
	leitura >> r1 >> r2 >> r3;
	leitura >> votos;
	
	while(votos!=0) {
		leitura >> votado;
		
		if(votado==r1) {
			cont1++;
		} else if(votado==r2) {
			cont2++;
		} else {
			cont3++;
		}
		
		votos--;
	}
	
	if((cont1>cont2) and (cont1>cont3)) {
		cout << cont1;
	} else if((cont2>cont1) and (cont2>cont3)) {
		cout << cont2;
	} else {
		cout << cont3;
	}
	
	return 0;
}