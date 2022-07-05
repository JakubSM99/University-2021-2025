//Wczytać 7elementów do tablicy 1-wymiarowej. 
//Utworzyć inną tablicę 1-wymiarową elementy której są równe elementom pierwszej podzielonym przez 5. 
//Wyświetlić na ekranie elementy drugiej tablicy.


#include <iostream>
using namespace std;

int main()
{
	int tab[7];
	cout << "Potrzebuje 7 elementow\n" << endl;
	cout << "Podaj pierwszy element:\n" << endl;
	cin >> tab[0];
	cout << "Podaj drugi element:\n" << endl;
	cin >> tab[1];
	cout << "Podaj trzeci element:\n" << endl;
	cin >> tab[2];
	cout << "Podaj czwarty element:\n" << endl;
	cin >> tab[3];
	cout << "Podaj piaty element:\n" << endl;
	cin >> tab[4];
	cout << "Podaj szosty element:\n" << endl;
	cin >> tab[5];
	cout << "Podaj siodmy element:\n" << endl;
	cin >> tab[6];
	cout << "\nElementy Pierwszej tablicy to:\n" << endl;
	for (int i = 0; i < 7; i++)
		cout << tab[i] << " " << endl;

	int tab2[7];

	for (int i = 0; i < 7; i++)
		tab2[i] = tab[i] / 5;

	cout << "\nElementy drugiej tablicy to:\n" << endl;
	for (int i = 0; i < 7; i++)
		cout << tab2[i] << " " << endl;


}