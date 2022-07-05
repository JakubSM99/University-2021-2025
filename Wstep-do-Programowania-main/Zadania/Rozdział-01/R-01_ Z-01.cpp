/*Zostałeś właśnie zatrudniony przez firmę MacorMuscle, Inc.(oprogramowanie dla kulturystów).
Zamierza ona wejść na rynek europejski i potrzebuje programu przeliczającego cale na centymetry (1cal=2.54cm).
Program powinien pobierać liczbę cali podaną przez urzytkownika.
Twoim zadaniem jest określenie i wykonanie projektu programu (krok 1 i 2 procesu programowania).*/


#include <iostream>
using namespace std;

int main()
{
    int a;
    auto b = 2.54;

    cout << "Podaj liczbe cali\n";
    cin >> a;

    auto c = a * b;

    cout << "twoja liczba centymetrow to\n" << c;

    return 0;
}