#include <iostream>

using namespace std;

int main() {
    int num, q=0, n=0, p=0, qntd=0;
    float media;

    while(num!=0) {
        cin >> num;

        q = q + num;

        qntd++;

        if (num<0) {
            n++;
        } else {
            p++;
        }
    }

    media = q / float(qntd-1);

    cout << media << endl;
    cout << p - 1 << endl;
    cout << n << endl;
    cout << (p-1) / float(qntd-1) << endl;
    cout << n / float(qntd-1) << endl;

    return 0;
}