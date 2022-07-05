// Napisać program, rozwiązujący równanie:
//2*a*𝑥2+b*x-8=0
//(współczynniki a i b są podawane przez użytkownikaz klawiatury, 
//wyświetlane są pierwiastki lub komunikat o braku rozwiązań).

#include <iostream>
using namespace std;

int main()
{
    cout << "Witaj w programie rozwiazujacym rownanie: 2*a*𝑥2+b*x-8=0\n " << endl;
    cout << "Podaj wspolczynnik a \n" << endl;
    int a;
    cin >> a;
    cout << "Podaj wspolczynnik b \n" << endl;
    int b;
    cin >> b;
    float x;
    float c;
    c = 4 * a + b;
    x = 8 / c;
    cout << "\nTwoj wynik to:\n" << endl;
    cout << "x=" << x << endl;

}