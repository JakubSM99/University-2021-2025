/*
R-09_Z-03
Napisz funkcję, która pobiera trzy ergumenty: znak oraz dwie liczby całkowite. 
Pierwsza liczba określa liczbę razy, jaką należy wyświetlić znak w jednym wierszu; 
druga liczba określa liczbę wierszy. Napisz program, który wykorzysta tę funkcję.
*/

#include <iostream>
using namespace std;

void tabela(string a, int i, int j) {
    while (j > 0) {
        for (int b = 0; b < i; b++) {
            cout << a;
        }
        cout << "\n";
        j = j - 1;
    }
}


int main()
{
    string ch;
    int i, j;
    cout << "Podaj znak : " << endl;
    cin >> ch;
    cout << "Podaj dwie wartosci: " << endl;
    cin >> i;
    cin >> j;
    cout << "Oto twoja tabela, ze znakiem: "<<'"' << ch <<'"' << " wyswietlanym: " << i << " razy w jendym wierszu, w: " << j << " ilosci wierszy!" << endl;
    tabela(ch, i, j);
}