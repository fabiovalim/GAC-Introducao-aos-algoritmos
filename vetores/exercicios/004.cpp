#include <iostream>

using namespace std;

int main() {
    int i, cont1=0, cont2=0;
    char gabarito[10], prova1[10], prova2[10];

    for(i=0; i<10; i++)
        cin >> gabarito[i];
    
    for(i=0; i<10; i++)
        cin >> prova1[i];

    for(i=0; i<10; i++)
        cin >> prova2[i];

    for(i=0; i<10; i++) {
        if(gabarito[i]==prova1[i])
            cont1++;
        if(gabarito[i]==prova2[i])
            cont2++;
    }

    cout << cont1 << endl;
    if(cont1>=6)
        cout << "APROVADO" << endl;
    else if(cont1<6)
        cout << "REPROVADO" << endl;

    cout << cont2 << endl;
    if(cont2>=6)
        cout << "APROVADO" << endl;
    else if(cont2<6)
        cout << "REPROVADO" << endl;
        
    return 0;
}