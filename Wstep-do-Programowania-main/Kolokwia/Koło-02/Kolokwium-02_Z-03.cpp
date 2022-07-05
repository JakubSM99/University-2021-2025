// Wyświetlićnapis: „Podaj liczbę większą niż4”. 
//Wczytać z klawiaturyliczbę całkowitą do zmiennej n. 
//Policzyć i wyświetlić sumę liczb od 5 do (n+2), jeślin>=5. 
//Jeżeli n<5,wyświetlić -1.
#include <iostream>
using namespace std;

int main()
{
	cout << "Podaj liczbe wieksza niz 4\n" << endl;
	int n;
	cin >> n;
	int x = n + 2;
	int sum=0;
	cout << "\nTwoj wynik to:\n" << endl;
	if (n >= 5) {
		for (int i = 5; i <= x; i++) {
			sum = sum + i;
		}
		cout << sum << endl;
	}
	else {
		cout << "-1" << endl;
	}

}
