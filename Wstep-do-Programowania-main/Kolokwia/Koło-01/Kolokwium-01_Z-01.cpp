// Napisać program CENNIK AUT drukujący na ekranie tabelkę zawierającą dane pieciu samochodów (marka, oraz cena). 
//Wpisać z klawiatury i wpisać przykładowe dane.

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    string f;
    f = " - ";
    string ff;;
    ff = "PLN";
    cout << "Podaj dane pieciu aut\n" << endl;
    cout << "\nMarka pierwszego auta\n" << endl;
    string a;
    cin >> a;
    cout << "\nCena pierwszego auta\n" << endl;
    int aa;
    cin >> aa;
    cout << "\nMarka drugiego auta\n" << endl;
    string b;
    cin >> b;
    cout << "\nCena drugiego auta\n" << endl;
    int bb;
    cin >> bb;
    cout << "\nMarka trzeciego auta\n" << endl;
    string c;
    cin >> c;
    cout << "\nCena trzeciego auta\n" << endl;
    int cc;
    cin >> cc;
    cout << "\nMarka czwartego auta\n" << endl;
    string d;
    cin >> d;
    cout << "\nCena czwartego auta\n" << endl;
    int dd;
    cin >> dd;
    cout << "\nMarka piatego auta\n" << endl;
    string e;
    cin >> e;
    cout << "\nCena piatego auta\n" << endl;
    int ee;
    cin >> ee;
    cout << "\nDziekuje. Oto twoje dane:\n" << endl;
    cout << "\nMarka - Cena\n" << endl;
    cout << a << f << aa <<ff<< endl;
    cout << b << f << bb << ff << endl;
    cout << c << f << cc << ff << endl;
    cout << d << f << dd << ff << endl;
    cout << e << f << ee << ff << endl;
    cout << "\n Dziekujemy za skorzystanie z naszych uslug.\n" << endl;
}
