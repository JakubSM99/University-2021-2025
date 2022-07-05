//Napisać program ILOCZYN. Program ma wczytać z klawiatury dwie liczby, a następnie policzyć ich iloczyn.
//Wynik drukujemy na ekranie. Program powinien być czytelny tj, każdą wczytywan a liczbę i drukowany wynik poprzedzić stosownym komunikatem.

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	cout << "Witaj w programie ILOCZYN. Jakie dwie liczby chcialbys dzisiaj pomnozyc?\n" << endl;
	
	cout << "\nPodaj pierwsza liczbe\n" << endl;
	int a;
	cin >> a;
	
	cout << "\nPodaj druga liczbe\n" << endl;
	int b;
	cin >> b;
	
	cout << "twoj wynik mnozenia to:\n" << endl;
	int c = a * b;
	cout << c << endl;
}
