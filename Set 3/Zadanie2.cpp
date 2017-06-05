// Klaudia C

#include <iostream>
using namespace std;

int main(){
    int a[] = {-10, -4, -2, 0, 2, 5, 9, 13, 42, 53};
    int N = 10; // rozmiar tablicy
    int l = 0, c, r = N - 1; // poczatek, srodek i koniec przedzialu
    int x; // poszukiwany element
    int p = -1; // pozycja elementu x

    cout << "Podaj wartosc poszukiwanego elementu: ";
    cin >> x;
    while(p == -1 && l <= r){
        c = (l + r)/2;
        if(a[c] == x) p = c;
        else if(x > a[c]) l = c + 1;
        else r = c - 1;
    }
    if(p == -1) cout << "Nie ma takiego elementu w tablicy." << endl;
    else cout << "Pozycja elementu " << x << " to " << p <<endl;
    cout << "Tablica, w ktorej byl on szukany:" << endl;
    for(int i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}
