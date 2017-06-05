// Klaudia C

#include <iostream>
using namespace std;

int main(){
    int x; // wartosc elementu do wstawienia
    int p = 0; // pozycja nowego elementu w tablicy
	int Tab[10] = {-5, -1, 0, 5, 7, 10, 16, 19, 33, 142};
    int N = 10; // rozmiar tablicy

	cout << "Dana jest nastepujaca tablica:";
	for(int i = 0; i < N; i++) cout << Tab[i] << " ";
	cout << endl;
    cout << "Podaj wartosc elementu, ktory chcesz wstawic: ";
    cin >> x;
	while(p < N && Tab[p] <= x) p++;
	N++;
	for(int i = N - 1; i > p; i--) Tab[i] = Tab[i - 1];
	Tab[p] = x;
	cout << "Tablica po dodaniu " << x << endl;
	for(int i = 0; i < N; i++) cout << Tab[i] << " ";
	cout << endl;

	return 0;
}
