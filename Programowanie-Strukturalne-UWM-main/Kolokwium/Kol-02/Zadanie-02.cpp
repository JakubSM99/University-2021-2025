#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include<list>
#include <iomanip>

using namespace std;

//Z.2.

// Wydrukowywanie tebeli dwuwymiarowej wielkosci 4x4
void printTable(int tab[][4], int dim1) {
	int w, k;
	for (w = 0; w < dim1; w++) {
		for (k = 0; k < 4; k++)
			cout << tab[w][k] << " ";
		cout << endl;
	}
}

// Wydrukowywanie tebeli dwuwymiarowej wielkosci 3x3
void printTable2(int tab[][3], int dim1) {
	int w, k;
	for (w = 0; w < dim1; w++) {
		for (k = 0; k < 3; k++)
			cout << tab[w][k] << " ";
		cout << endl;
	}
}

// Usuwanie kolumny m oraz wiersza n i tworzenie nowej tabeli dwuwymiarowej 3x3
void usun(int tab1[], int m, int n){

	// usuwamy co m elementy (kolumna m)
	int a = 4;
	while (a > 0) {
		for (int i = m-1; i < 16; i++)
			tab1[i] = tab1[i + 1];
		tab1[16] = 0;
		a = a - 1;
		m = m + 3;
	}

	// tworzymy tabele druga bez kolumny m
	int tab2[12];
	for (int i = 0; i < 12; i++)
		tab2[i] = tab1[i];
	cout << endl;


	// usuwamy elementy zaczynając on (n-1)*4 i 2 kolejne
	
	if (n = 1) {
		int b = 3;
		while (b > 0) {
			for (int i = (n - 1) * 4; i < 12; i++)
				tab2[i] = tab2[i + 1];
			tab2[12] = 0;
			b = b - 1;
		}
	}
	if (n > 1) {
		int b = 3;
		while (b > 0) {
			for (int i = ((n - 1) * 4) - 1; i < 12; i++)
				tab2[i] = tab2[i + 1];
			tab2[12] = 0;
			b = b - 1;
		}
	}

	// Tworzymy tabele 3 bez wiersza n, z 9 liczbami, które stworzą tabelicę o wymiarach 3x3
	int tab3[9];
	for (int i = 0; i < 9; i++)
		tab3[i] = tab2[i];
	cout << endl;

	int B[3][3] = { {tab3[0],tab3[1],tab3[2]}, {tab3[3],tab3[4],tab3[5]}, {tab3[6],tab3[7],tab3[8]} };

	printTable2(B, 3);

}

int main()
{
	// Pobieranie wartosci m i n
	int m, n;
	cout << "Podaj dwie liczby, mniejsze od 5 i wieksze od 0: " << endl;
	cout << "Podaj pierwsza liczbe: " << endl;
	cin >> m;
	cout << "Podaj druga liczbe: " << endl;
	cin >> n;

	// Sprawdzanie wartosci m i n
	while (m >= 5) {
		cout << "Pierwsza liczba jest niepoprawna" << endl;
		cin >> m;
	}
	while (n >= 5) {
		cout << "Druga liczba jest niepoprawna" << endl;
		cin >> n;
	}
	while (m <= 0) {
		cout << "Pierwsza liczba jest niepoprawna" << endl;
		cin >> m;
	}
	while (n <= 0) {
		cout << "Druga liczba jest niepoprawna" << endl;
		cin >> n;
	}

	// Pobieranie wartosci od urzytkownika, które zostaną urzyte w tablicy dwuwymiarowej 
	int i = 0;
	int tab1[16];
	while (i < 16) {
		cout << "Podaj kolejna liczbe calkowita do tablicy: " << endl;
		cin >> tab1[i];
		i = i + 1;
	}
	// Tworzenie tablicy dwuwymiarowej 4x4
	int A[4][4] = { {tab1[0],tab1[1],tab1[2],tab1[3]},
					{tab1[4],tab1[5],tab1[6],tab1[7]},
					{tab1[8],tab1[9],tab1[10],tab1[11]},
					{tab1[12],tab1[13],tab1[14],tab1[15]} };

	// Korzystanie z utworzonych funkcji
	printTable(A, 4);
	usun(tab1, m, n);
}