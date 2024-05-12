#include <iostream>

using namespace std;

void piramide(int num) {
    int i;
    char simb1='*', simb2='=', vetor[num];

    for(i=0; i<num; i++) {
        if(i==0 or i%2==0)
            vetor[i] = simb1;
        else
            vetor[i] = simb2;
    }

    int control=1;
    while(control<=num) {
        for(i=0; i<control; i++)
            cout << vetor[i];
        cout << endl;

        control++;
    }

}   

int main() {
    int n;

    cin >> n;
    piramide(n);

    return 0;
}