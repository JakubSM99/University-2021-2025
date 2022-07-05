/*Napisz program, który pyta o twoje imię, a następnie:
a. wyświetla je w cudzysłowie
b. wyświetla je w polu o szerokości 20 znaków, 
w cudzysłów powinno być ujęte całe pole ,
c. wyświetla je przy lewym brzegu pola o szerokości 20 znaków,
w cudzysłów powinno być ujęte całe pole,
d. wyświetla je w polu o trzy znaki dłuższym niż imię.*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


int main()
{
	char str[100];
	int i, totChar;
	totChar = 0;
	
	cout << "Podaj imie\n";
	cin>>str;//gets and store string from useer
	//count characters of a string wit out space
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ')// this condition is used to avoid counting space
		{
			totChar++;
		}
	}
	cout << "a." << endl;
	cout << '"'<<str<<'"'<<endl;
	int b = 20 - totChar;
	string a(b, ' ');
	string c(3, ' ');
	cout << "b,c" << endl;
	cout << '"' << str << a << '"'<<endl;
	cout << "d" << endl;
	cout << "[" << str << c << "]" << endl;
	
	

	return 0;
}