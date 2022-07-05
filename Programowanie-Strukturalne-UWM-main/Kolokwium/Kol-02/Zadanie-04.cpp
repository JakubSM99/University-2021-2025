#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include<list>

using namespace std;

//Z.4.
void wypisz(list<int> list1) {

    // Elementy do usunięcia
    if (list1.size() % 3 == 0) {
        int x = list1.size() / 3;
        int z = 0;
        while (x > 0) {
            // Usuwanie Odpowiednich Elementów
            list<int>::iterator i = list1.begin();
            advance(i, z);
            list1.erase(i);
            z = z + 2;
            x = x - 1;
        }
    }
    else {
        int x = (list1.size() / 3) + 1;
        int z = 0;
        while (x > 0) {
            // Usuwanie Odpowiednich Elementów
            list<int>::iterator i = list1.begin();
            advance(i, z);
            list1.erase(i);
            z = z + 2;
            x = x - 1;
        }
    }
 

    // Drukowanie Listy po jej zredukowaniu
    cout << "Lista po usunieciu odpowiednich elementow: ";
    for (list<int>::iterator i = list1.begin(); i != list1.end(); i++)
        cout << *i << " ";
    cout << endl;
}

int main()
{
    // Tworzenie listy
    list<int> list1;

    // Pobieranie elementów i dodawanie ich kolejno do pierwszej listy
    int a;
    cout << "Ile elementow listy chcesz podac?: " << endl;
    cin >> a;
    while (a > 0) {
        cout << "Podaj element, ktory chcesz dodac do listy" << endl;
        int b;
        cin >> b;
        list1.push_back(b);
        a = a - 1;
    }

    // Drukowanie pierwszej listy
    cout << "Lista po dodaniu elementow: ";
    for (list<int>::iterator i = list1.begin(); i != list1.end(); i++)
        cout << *i << " ";
    cout << endl;

    wypisz(list1);
}