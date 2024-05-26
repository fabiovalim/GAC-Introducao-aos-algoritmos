#include <iostream>

using namespace std;

int main() {
    float vetA[10], vetB[10],vetC[10];
    int i;

    for(i=0; i<10; i++)
        cin >> vetA[i];

    for(i=0; i<10; i++)
        cin >> vetB[i];

    for(i=0; i<10; i++)
        vetC[i] = (vetA[i]+vetB[9-i])/2.0;
    
    for(i=0; i<10; i++)
        cout << vetC[i] << endl;

    float maior, segMaior;
    maior = vetA[0];
    segMaior = vetA[1];

    if(segMaior>maior) {
        maior = vetA[1];
        segMaior = vetA[0];
    }

    for(i=2; i<10; i++) {
        if(vetA[i]>maior) {
            segMaior = maior;
            maior = vetA[i];
        }
        else if(vetA[i]>segMaior and vetA[i]!=maior) {
            segMaior = vetA[i];
        }
    }

    cout << endl;
    cout << maior << endl;
    cout << segMaior << endl;

    maior = vetB[0];
    segMaior = vetB[1];

    if(segMaior>maior) {
        maior = vetB[1];
        segMaior = vetB[0];
    }
    for(i=2; i<10; i++) {
        if(vetB[i]>maior) {
            segMaior = maior;
            maior = vetB[i];
        }
        else if(vetB[i]>segMaior and vetB[i]!=maior) {
            segMaior = vetB[i];
        }
    }

    cout << endl;
    cout << maior << endl;
    cout << segMaior << endl;
    
    return 0;
}