/*
Kolokwium 01, Zadanie 03
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

void zadanie(int a) {
	if (a == 1) {
		cout << "Niedziela" << endl;
	}
	else if (a == 2) {
		cout << "Poniedzialek" << endl;
	}
	else if (a == 3) {
		cout << "Wtorek" << endl;
	}
	else if (a == 4) {
		cout << "Sroda" << endl;
	}
	else if (a == 5) {
		cout << "Czwartek" << endl;
	}
	else if (a == 6) {
		cout << "Piatek" << endl;
	}
	else if (a == 7) {
		cout << "Sobota" << endl;
	}
	else {
		cout << "Nie ma takiego dnia" << endl;
	}
}

int main()
{
	int a;
	cout << "podaj liczbe od 1 do 7: " << endl;
	cin >> a;
	zadanie(a);
}