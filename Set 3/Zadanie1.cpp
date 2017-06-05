// Klaudia C

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int x; // wartosc elementu do wstawienia
    int p; // pozycja e;e,entuu x
    int k = 0; // indeks pomocniczy
    int N; // rozmiar tablicy

    cout << "Podaj dlugosc tablicy (mniej niz 100): ";
	cin >> N;
	int Tab[N];
    if(N < 101){

        for(int i = 0; i < N; i++){
            Tab[i] = rand() % 10 + 0;
            cout << Tab[i] << " ";
        }
        cout << endl;
    }
    else{
        cout << "Blad. Za duzo elementow." << endl;
        return 0;
    }
    cout << "Podaj wartosc elementu, ktory chcesz wstawic: ";
    cin >> x;
    cout << "Podaj pozycje elementu, na ktorej chcesz go umiescic: ";
    cin >> p;
    if(p < 0 || p > N){
        cout << "Blad. Zly numer pozycji." << endl;
        return 0;
    }
	while(k != p) k++;
	N++;
	for(int i = N - 1; i > k; i--) Tab[i] = Tab[i - 1];
	Tab[k] = x;
	cout << "Tablica po dodaniu " << x << " na pozycje " << p << endl;
	for(int i = 0; i < N; i++) cout << Tab[i] << " ";
	cout << endl;

	return 0;
}
