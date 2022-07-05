/*
R-09_Z-01
Zaprojektuj funkcję min(x,y), zwracającą mniejszą z dwóch wartości typu double i przetestuj ją za pomocą prostego programu.
*/

#include <iostream>
using namespace std;

void min(int x, int y) {
    if (x > y) {
        cout << "\nTa liczba jest wieksza: " << x << endl;
    }
    else {
        cout << "\nTa liczba jest wieksza: " << y << endl;
    }
}

int main()
{
    int x, y;
    cout << "Podaj wartosc x : \n" << endl;
    cin >> x;
    cout << "\nPodaj wartosc y: \n" << endl;
    cin >> y;
    min(x, y);
}