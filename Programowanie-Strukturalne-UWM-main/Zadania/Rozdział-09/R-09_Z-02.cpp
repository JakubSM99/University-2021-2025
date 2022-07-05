/*
R-09_Z-02
Zaprojektuj funkcję rzad_zn(ch,i,j), wyświetlającą znak ch w kolumnach od i do j. Wypróbuj ją w prostym programie.
*/

#include <iostream>
using namespace std;

void rzad_zn(string a, int i, int j) {

    for (int b = 1; b < i; b++)
        cout <<"|"<<" "<<"|";
    int d = j + 1;
    for (int c = i; c < d; c++)
        cout <<"|"<<a<<"|";
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
    rzad_zn(ch, i, j);
}