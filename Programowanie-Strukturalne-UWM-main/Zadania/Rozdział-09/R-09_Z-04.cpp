/*
R-09_Z-04
Średnią harmoniczną dwóch liczb uzyskujemy przez znalezienie odwrotności danych liczb, 
wyciągnięci z nich średniej arytmetycznej i obliczeniu odwrotności otrzymanego wyniku. 
Napisz funkcję, która pobiera dwa argumenty typu double i zwraca ich średnią harmoniczną.
*/

#include <iostream>
using namespace std;

void SredniaHarmoniczna(double i, double j){
    double a = 1 / i;
    double b = 1 / j;
    double c = 2 / (a + b);
    cout << c << endl;
}


int main()
{
    double i, j;
    cout << "Podaj dwie wartosci: " << endl;
    cin >> i;
    cin >> j;
    SredniaHarmoniczna(i, j);
}