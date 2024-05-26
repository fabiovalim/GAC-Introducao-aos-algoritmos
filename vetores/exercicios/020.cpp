#include <iostream>

using namespace std;

int main() {
    float vetA[5], vetB[5], produto=0;
    int i;

    for(i=0; i<5; i++)
        cin >> vetA[i];

    for(i=0; i<5; i++)
        cin >> vetB[i];

    for(i=0; i<5; i++) {
        produto += (vetA[i]*vetB[i]);
    }

    cout << produto << endl;

    return 0;
}