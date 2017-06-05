// Klaudia C

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
	int p = 0; // indeks pomocniczy
    int N; // rozmiar tablicy

	cout << "Podaj dlugosc tablicy: ";
	cin >> N;
	int Tab[N];
	cout << "Tablica" << endl;
	for(int i = 0; i < N; i++){
	    Tab[i] = rand() % 10 + 0;
		cout << Tab[i] << " ";
	}
	cout << endl;
	while(p <= N - 2 && Tab[p] <= Tab[p + 1]) p++;
	if(p < N - 1) cout << "jest nieuporzadkowana." << endl;
	else cout << "jest uporzadkowana." << endl;

	return 0;
}
