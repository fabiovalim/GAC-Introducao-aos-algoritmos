#include <iostream>

using namespace std;

int maiorNum(int val1,int val2,int val3,int val4,int val5) {
    int maior;

    maior = val1;

    if(val2>val1 and val2>val3 and val2>val4 and val2>val5)
        maior = val2;
    else if(val3>val1 and val3>val2 and val3>val4 and val3>val5)
        maior = val3;
    else if(val4>val1 and val4>val2 and val4>val3 and val4>val5)
        maior = val4;
    else if(val5>val1 and val5>val2 and val5>val3 and val5>val4)
        maior = val5;

    return maior;
}

int main() {
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;
    cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    cout << maiorNum(a, b, c, d, e) << endl;

    return 0;
}