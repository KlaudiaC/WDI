// Klaudia C

#include <iostream>
using namespace std;

int main(){
    int a, b; // sprawdzane liczby

	cout << "Podaj liczby:" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "NWD(" << a << "," << b << ") = ";
	while(a != b){
	    if(a > b) a-=b;
		else b-=a;
	}
	cout << a << endl;

	return 0;
}
