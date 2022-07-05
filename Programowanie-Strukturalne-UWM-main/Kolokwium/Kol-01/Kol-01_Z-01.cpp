// Kolokwium 01, Zadanie 01
// Napisać program rozwiącujący równanie:
// 2*a*x^2+b*x-4=0
// (współczynniki a i b są podawane przez urzytkownika i przekazywane do funkcji, 
// w której wyświetlane są pierwiastki lub komunikat, o brakuy rozwiązań)

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

void zadanie( double a, double b) {
	double d = a * 2;
	double c = pow(b, 2.0);
	double e = 4 * (d * -4.0);
	double f = c - e;
	double g = 1 / 2;
	double h = pow(f, g);
	double i = h - b;
	double j = h + b;
	double x = i / (2.0 * d);
	double y = j / (2.0 * d);
	if (x > 0.0) {
		cout << "x1 = " << endl;
		cout << x << endl;
	}
	else {
		cout << "x1 = " << endl;
		cout << "brak rozwiazan" << endl;
	}
	if (y > 0.0) {
		cout << "x2 = " << endl;
		cout << y << endl;
	}
	else {
		cout << "x2 = " << endl;
		cout << "brak rozwiazan" << endl;
	}
}

int main()
{
	double a, b;
	cout << "podaj wspolczynnik a: " << endl;
	cin >> a;
	cout << "podaj wspolczynnik b: " << endl;
	cin >> b;
	cout << "rozwiazanie to: " << endl;
	zadanie(a, b);
}