//Napisać program, który prosi użytkownika o wprowadzenie jego imienia,
//a potem je wyświetla w cudzysłowie w polu o szerokośći 15 znaków, 
//przy czym w cudzysłów powinno być ujędte całe pole.

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	cout << "Dzien Dobry. Podaj nam swoje imie\n" << endl;
	char str[100];
	int i, totChar;
	totChar = 0;
	cin >> str;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ')// ten warunek jest używany by pominąć liczenie spacji
		{
			totChar++;
		}
	}
	//totChar - liczba opisująca jak długie jest imię.
	int a = 15;
	int b = a - totChar;
	string c(b, ' ');
	cout << "\n'"<<str << c << "'" << endl;
}
