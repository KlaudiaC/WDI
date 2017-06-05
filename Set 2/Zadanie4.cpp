// Klaudia C

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
	int p = 0; // indeks pomocniczy
    int x; // wartosc elementu do wstawienia
    int N; // rozmiar tablicy

	cout << "Podaj dlugosc tablicy: ";
	cin >> N;
	int Tab[N];
	for(int i = 0; i < N; i++){
	    Tab[i] = rand() % 10 + 0;
		cout << Tab[i] << " ";
	}
	cout << endl;
    cout << "Podaj wartosc elementu, ktory chcesz usunac (zostanie usuniete tylko pierwsze wystapienie): ";
    cin >> x;
	while(Tab[p] != x) p++;
	if(p < N){
		for(int i = p; i < N - 1; i++) Tab[i] = Tab[i + 1];
    	N--;
		cout << "Tablica po usunieciu " << x << endl;
		for(int i = 0; i < N; i++) cout << Tab[i] << " ";
	}
	else cout << "Blad. Nie ma takiego elementu w tablicy." << endl;

	return 0;
}
