//Napisać program wyznaczający wartość funkcji kwadratowej y=2x^2 + 2X - 3 w zadanym punkcie x.
//Wartość punktu x należy wczytać z klawiatury i wyświetlić odpowiednią wartość y.

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	cout << "Dzien dobry. Podaj wartosc X, dla wzoru funkcji: Y = 2x^2 + 2x - 3\n" << endl;
	int x;
	cin >> x;
	int a = x * 2;
	int b = (x*x)*2;
	int y = b + a - 3;
	cout << "Twój Y = " << y << endl;
}
