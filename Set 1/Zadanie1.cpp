// Klaudia C

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c;

    cout << "a*x^2 + b*x + c= 0" << endl;
    cout << "Wprowadz a: ";
	cin >> a;
	cout << "Wprowadz b: ";
	cin >> b;
	cout << "Wprowadz c: ";
	cin >> c;

	double delta;
	delta = b*b - 4 * a*c;
	if (delta > 0){
		double x1, x2;
		cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
		cout << "x2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
	}
	else if (delta == 0)
		cout << "x = " << (-b) / (2 * a) << endl;
		else
			cout << "Brak rozwiazan." << endl;

    return 0;
}
