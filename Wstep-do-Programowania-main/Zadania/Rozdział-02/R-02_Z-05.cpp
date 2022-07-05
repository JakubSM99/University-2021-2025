/*Napisz program, który tworzy zmienną cąłkowitą o nazwie liczba, 
nadaje jej wartość 10, oblicza podwojoną i podniesioną do kwadratu wartość zmiennej
oraz wyświetla wszystkie trzy liczby odpowiednio je oznaczając*/

#include <iostream>
using namespace std;

int main()
{
	int liczba = 10;
	int a = liczba * 2;
	int b = liczba * liczba;
	
	cout << " Liczba = " << liczba
		<< "\n Podwojona liczba = " << a
		<< "\n Liczba podniesiona do kwadratu = " << b << "\n";
}
