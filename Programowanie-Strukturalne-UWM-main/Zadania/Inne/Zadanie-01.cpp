#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include<list>

using namespace std;

//Z.1.
void funkcja(int a, int b) {
    if (b < a) {
        int tymczasowa = a;
        a = b;
        b = tymczasowa;
    }
    cout <<"wartosc a to : "<< a <<"\nwartosc b to: "<< b << endl;
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    funkcja(a, b);
    return 0;
}

