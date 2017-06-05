// Klaudia C

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int x; // liczba do odgadniecia
	int min, max; // zakres
	int k = 0; // liczba prob
	int a; // wpisywana liczba

    cout << "Podaj zakres: " << endl;
    cout << "min = ";
    cin >> min;
    cout << "max = ";
    cin >> max;
	x = rand() % (max - min) + min;
	while(a != x){
	    cout << "Podaj liczbe: ";
        k++;
		cin >> a;
		if(a == x) cout << "Liczba prob: " << k << endl;
		else if(a < x) cout << "Za malo." << endl;
		else cout << "Za duzo." << endl;
	}

	return 0;
}
