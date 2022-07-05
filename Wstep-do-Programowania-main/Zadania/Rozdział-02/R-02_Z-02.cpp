/*Napisz program, wyświetlający na ekranie Twoje imię oraz adres.*/

#include <iostream>
using namespace std;

int main()
{
	string a;
	string b;
	string c;
	string d;
	string e;
	cout << "\nPodaj swoje imie\n\n";
	cin >> a;
	cout << "\nPodaj swoja ulice\n\n";
	cin >> b;
	cout << "\nPodaj nr. domu\n\n";
	cin >> c;
	cout << "\nPodaj kod pocztowy\n\n";
	cin >> d;
	cout << "\nPodaj miastro\n\n";
	cin >> e;
	cout << "\nTwoje Imie i adres:\n\n" << a << endl << "ul." << b << " " << c << ", " << d << " " << e<<"\n";

}
