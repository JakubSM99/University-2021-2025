#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include<list>

using namespace std;

//Zadanie.1.

int z() {
	int n = 7;
	int m = 12;
	if (n > m) {
		n = n - 1;
		int x = n * m;
		return x;
	}
	else if (m > n) {
		m = m - 1;
		int x = n * m;
		return x;
	}
	else {
		int a = n - 1;
		int b = m - 1;
		int i = a * b;

		int c = n - 2;
		int d = m - 2;
		int j = c * d;

		int x = i + j;
		return x;
	}
}

int y() {
	int n = 11;
	int m = 9;
	if (n > m) {
		n = n - 1;
		int x = n * m;
		return x;
	}
	else if (m > n) {
		m = m - 1;
		int x = n * m;
		return x;
	}
	else {
		int a = n - 1;
		int b = m - 1;
		int i = a * b;

		int c = n - 2;
		int d = m - 2;
		int j = c * d;

		int x = i + j;
		return x;
	}
}

int main()
{
	if (y > z) {
		cout << "f(11,9) jest wieksze od f(7,12)" << endl;
	}
	else if (z > y) {
		cout << "f(7, 12) jest wieksze od f(11,9)" << endl;
	}
	else {
		cout << "funkcje sa sobie rowne" << endl;
	}
}