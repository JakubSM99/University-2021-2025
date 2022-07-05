#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include<list>

using namespace std;

//Z.3.



void funkcja1(int n, double tab1[],double tab2[],double tab3[]) {
	for (int i = 0; i < n; ++i)
		tab3[i] = tab1[i];
	cout << '\n';
	for (int i = 0; i < n; ++i)
		tab3[i+5] = tab2[i];
	cout << '\n';
	for (int i = 0; i < 2 * n; ++i)
		cout << tab3[i] << " " << endl;
	cout << '\n';
}

void funkcja2(int n, double tab1[], double tab2[], double tab3[]) {
	tab3[0] = tab1[0];
	for (int i = 1; i < n; ++i)
		tab3[i *2] = tab1[i];
	cout << '\n';
	for (int i = 1; i < n; ++i)
		tab3[(i * 2)-1] = tab2[i-1];
	cout << '\n';
	for (int i = 0; i < 2 * n; ++i)
		cout << tab3[i] << " " << endl;
	cout << '\n';
}


int main()
{
	int x = 5;
	int i = 0;
	double tab1[5];
	while (x > 0) {
		cout << "Podaj element tablicy 1: " << endl;
		cin >> tab1[i];
		x = x - 1;
		i = i + 1;
	}
	double tab2[5];
	int y = 5;
	int j = 0;
	while (y > 0) {
		cout << "Podaj element tablicy 2: " << endl;
		cin >> tab2[j];
		y = y - 1;
		j = j + 1;
	}
	int n = 5;
	double tab3[10];

	funkcja1(n, tab1, tab2, tab3);
	funkcja2(n, tab1, tab2, tab3);
}