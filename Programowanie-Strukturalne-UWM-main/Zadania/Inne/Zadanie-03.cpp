#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include<list>

using namespace std;

//Z.3.

struct Student
{
	string imie;
	string nazwisko;
	string kierunek;
	int legitymacja;
};

void func(struct Student s)
{
	cout << " Imie studenta: " << s.imie << endl;
	cout << " Nazwisko studenta: " << s.nazwisko << endl;
	cout << " Kierunek, na ktorym jest student: " << s.kierunek << endl;
	cout << " Nr Legitymacji studenta: " << s.legitymacja << endl;
}

void funkcja(int i) {
	while (i > 0) {
		struct Student s;

		string a, b, c;
		cout << "Podaj imie studenta: " << endl;
		cin >> a;
		cout << "Podaj nazwisko studenta: " << endl;
		cin >> b;
		cout << "Podaj nazwe kierunku studenta: " << endl;
		cin >> c;
		int d;
		cout << "Podaj Nr Legitymacji studenta: " << endl;
		cin >> d;

		s.imie = a;
		s.nazwisko = b;
		s.kierunek = c;
		s.legitymacja = d;

		func(s);
		i = i - 1;
	}
}

int main()
{
	int i;
	cout << "Dla ilu studentów chcesz podać dane?: " << endl;
	cin >> i;
	funkcja(i);
	return 0;
}