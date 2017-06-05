// Klaudia C

#include <iostream>
using namespace std;

int main(){
    int a[] = {6, -3, 12, 5, 34, -6, 0, 0, -34, 21};
    int N = 10; // rozmiar tablicy
    int x = a[1]; // wartosc najmniejszego elementu o nieparzystym numerze
    int y = 0; // numer najwiekszego elementu o wartosci parzystej
    int max = a[0]; // najwieksza parzysta wartosc
    int p = 0; // indeks pomocniczy

    for(int i = 3; i < N; i += 2) if(a[i] < x) x = a[i];
    while(max%2 == 1){
        if(a[p]%2 == 0){
            max = a[p];
            y = p;
        }
        p++;
    }
    for(int i = p + 1; i < N; i++){

        if(a[i]%2 == 0 && a[i] > max){
            y = i;
            max = a[i];
        }
    }
    cout << "Najmniejsza wartosc elementu o nieparzystym numerze: " << x << endl;
    cout << "Numer najwiekszego elementu o parzystej wartosci: " << y << endl;
    cout << "Tablica, na ktorej byly prowadzone wyszkukiwania: " << endl;
    for(int i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}
