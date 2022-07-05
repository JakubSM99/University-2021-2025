#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;


void printTable(int tab[][5], int a) {
	int w, k;
	for (w = 0; w < a; w++) {
		for (k = 0; k < 4; k++)
			cout << tab[w][k] << " ";
		cout << endl;
	}
}

void inna(int m, int n) {
	const int a = m;
	const int b = n;

	int tab[6][5] = { {4, 5, 6}, {5, 6}, {6}, {}, {} };

	printTable(tab[6][5], a);
}

void glowna(int m, int n) {
	int a, b, c, d;
	while (m < 0) {
		cout << "podaj liczbe 0<=m<=10" << endl;
		cin >> a;
		m = a;
		while (m > 10) {
			cout << "podaj liczbe 0<=m<=10" << endl;
			cin >> b;
			m = b;
		}
	}
	while (n < 0) {
		cout << "podaj liczbe 0<=m<=10" << endl;
		cin >> c;
		n = c;
		while (n > 10) {
			cout << "podaj liczbe 0<=m<=10" << endl;
			cin >> d;
			n = d;
		}
	}
	inna(m, n);
}

int main()
{
	int m, n;
	m = -1;
	n = -1;
	glowna(m, n);
}