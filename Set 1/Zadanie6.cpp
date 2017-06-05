// Klaudia C

#include <iostream>
using namespace std;

int main(){
    int a, b; // dzielna i dzielnik
	int w = 0; // wynik dzielenia

	cout << "Podaj liczby." << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << a << "/" << b << " = ";
	while(a > b){
	    a -= b;
		w++;
	}
	cout << w << ", reszta " << a << endl;

	return 0;
}
