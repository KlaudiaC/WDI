// Klaudia C

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int N; // rozmiar tablicy
    int p = 0;
    int k = 0; // poczatek i koniec przedzialu
    int po, ko; // ostateczny poczatek i koniec poszukiwanej podtablicy
    int l = 1;
    int lo = 0; // liczba i ostateczna liczba elementow podtablicy
    int i = 1;

    cout << "Podaj dlugosc tablicy: ";
	cin >> N;
	int a[N];
	cout << "Tablica" << endl;
	for(int i = 0; i < N; i++){
	    a[i] = rand() % 10 + 0;
		cout << a[i] << " ";
	}
	cout << endl;

    while(i < N){
        if(a[i] >= a[k]){
            k = i;
            l++;
        }
        else{
            if(l > lo){
                po = p;
                ko = k;
                lo = l;
            }
            p = i;
            k = i;
            l = 0;
        }
    i++;
    }
    cout << "Najdluzsza podtablica niemalejaca to " << endl;
    for(i = po; i <= ko; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}
