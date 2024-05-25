#include <iostream>

using namespace std;

int main() {
    int num, total=0, voto1=0, voto2=0, voto3=0, voto4=0, nulo=0, branco=0;

    while(num!=0) {
        cin >> num;

        total++;

        if(num==1) {
            voto1++;
        } else if(num==2) {
            voto2++;
        } else if(num==3) {
            voto3++;
        } else if(num==4) {
            voto4++;
        } else if(num==5) {
            nulo++;
        } else if(num==6) {
            branco++;
        }
    }

    cout << "1: " << voto1 << " " << voto1 / float(total-1) << endl;
    cout << "2: " << voto2 << " " << voto2 / float(total-1) << endl;
    cout << "3: " << voto3 << " " << voto3 / float(total-1) << endl;
    cout << "4: " << voto4 << " " << voto4 / float(total-1) << endl;
    cout << "5: " << nulo << " " << nulo / float(total-1) << endl;
    cout << "6: " << branco << " " << branco / float(total-1) << endl;
    cout << "7: " << (total-1) - nulo - branco << " " << ((total-1) - nulo - branco) / float(total-1) << endl;
    

    return 0;
}