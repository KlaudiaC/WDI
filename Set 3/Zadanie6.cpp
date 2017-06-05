// Klaudia C

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int X;
    int Y = 1;
    int I = 2;

    cout << "Podaj X: ";
    cin >> X;
    do{
        if(X%I == 0) Y = 0;
        I++;
    }
    while(I <= sqrt(X) && Y == 1);
    cout << "Y = " << Y << ", wiec X ";
    if(Y == 1) cout << "jest liczba pierwsza." << endl;
    else cout << "nie jest liczba pierwsza." << endl;

    return 0;
}
