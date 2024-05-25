#include <iostream>

using namespace std;

int main(){
	int n;
	int p=1;
	
	cin >> n;
	
	while (p<=10) {
		cout << n << " x " << p << " = " << n*p << endl;
		p = p + 1;
	}
	
	return 0;
}
