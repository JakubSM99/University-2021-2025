/*Napisz program przeliczający twój wiek w latach na wiek w dniach. Nie uwzględniając ułamków lat oraz lat przestępnych.*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "\nPodaj swoj wiek\n\n";
	cin >> a;
	int b = 365;
	int c = a * b;
	cout << "\nTwoj wiek w dniach to:\n\n";
	cout << c << "\n";

}