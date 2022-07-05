/*Napisz program, który pyta o twoje imię, a następnie o nazwisko,
po czym wyświetla je */

#include <iostream>
using namespace std;

int main()
{
	string a;
	string b;
	cout << "\nJak Masz na Imie?\n\n";
	cin >> a;
	cout << "\nJak Masz na Nazwisko?\n\n";
	cin >> b;
	cout << "\nNazwisko i Imię\n" << b << " " << a;
}
