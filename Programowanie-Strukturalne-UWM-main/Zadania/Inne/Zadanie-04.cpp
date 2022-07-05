#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include<list>

using namespace std;

//Z.4.
void wypisz(list<int> list1){
    
    // Elementy do usunięcia
    if (list1.size() % 2 == 0) {
        int z = (list1.size() / 2)-1;
        int y = (list1.size() / 2)+1;
        int d = z+1;
        cout << "Elementy do usuniecia to: " << d << " i " << y << endl;
        
        // Usuwanie Odpowiednich Elementów
        list<int>::iterator i = list1.begin();
        advance(i, z);
        list<int>::iterator j = list1.begin();
        advance(j, y);
        list1.erase(i, j);
    }
    else {
        int x = (list1.size() / 2);
        int d = x + 1;
        cout <<"Element do usuniecia to: "<< d << endl;

        // Usuwanie Odpowiednich Elementów
        list<int>::iterator i = list1.begin();
        advance(i, x);
        list1.erase(i);
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