// Klaudia C

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a; // sprawdzana liczba
	int p = 2; // zmienna pomocnicza

	cout << "Podaj liczbe: ";
	cin >> a;

	//Wersja strukturalna:
	while(p <= sqrt(a) && a%p != 0) p++;
	if(p > sqrt(a)) cout << "To jest liczba pierwsza." << endl;
	else cout << "To nie jest liczba pierwsza." << endl;

	/*
	//Wersja niestrukturalna:
	for(int i = 2; i <= sqrt(a); i++){
	    if(a%i == 0){
		    cout << "To nie jest liczba pierwsza." << endl;
            p = i;
			break;
		}
	}
	if(p > sqrt(a)) cout << "To jest liczba pierwsza." << endl;
	*/

	return 0;
}
