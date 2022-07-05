//Wczytać z klawiaturyelementydotablicy10-elementowejtypu int. 
//Wypisać na ekranie tylko te elementy tablicy, wartości których się powtarzają, 
//jednak każdy taki element ma zostać wypisany tylko raz w tej samej kolejności, 
//w jakiej wystąpił w tablicy. 
//
//Np.dla tablicy o elementach 1,0,3,2,1,12,12,8,3,12 
//wyświetlone mają zostać wartości1,3,12.


#include <iostream>
using namespace std;

int main()
{
	int tab[10];
	cout << "Potrzebuje 10 elementow\n" << endl;
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
	cout << "Podaj osmy element:\n" << endl;
	cin >> tab[7];
	cout << "Podaj dziewiaty element:\n" << endl;
	cin >> tab[8];
	cout << "Podaj dziesiaty element:\n" << endl;
	cin >> tab[9];

	cout << "\nElementy Pierwszej tablicy to:\n" << endl;
	for (int i = 0; i < 10; i++)
		cout << tab[i] << " " << endl;

	for (int i = 0; i <= 10; i++)
	 {
		int powt = 0;
		for (int j = 0; j < 10; j++)
		{
			if (i == tab[j])
			{
				powt = powt + 1;
			}
		}
		if (powt > 1)
		{
			cout << "Wartosc powtarzajaca sie to: " << i << endl;
		}
	}

	return 0;

}