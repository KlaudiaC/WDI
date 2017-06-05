// Klaudia C

#include <iostream>
using namespace std;

int main(){
    int x = 90, y = 230, z = 0;

    cout << "Dla wartosci x = " << x << ", y = " << y << ", z = " << z;
    while(x < y){
        z++;
        if(z%2 == 1) x = x + 3;
        else x = x + 4;
    }
    cout << " wynikiem jest:" << endl;
    cout << "x = " << x << endl;
    cout << "z = " << z << endl;

    return 0;
}
