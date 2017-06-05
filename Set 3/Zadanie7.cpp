// Klaudia C

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int N; // liczba losowanych elementow
    int L; // zmienna pomocnicza
    int a[100]; // tablica do wpisywania wylosowanych liczb

    N = 0;
    L = rand() % 50 + 0;
    while(L != 0 && N < 101){
        a[N] = L;
        N++;
        L = rand() % 50 + 0;
    }
    cout << "Liczba wylosowanych liczb = " << N << endl;
    cout << "Wylosowane elementy to: " << endl;
    for(int i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}
