/*Napisz program wyświetlający następujący tekst:
Usmiech!Usmiech!Usmiech!
Usmiech!Usmiech!
Usmiech!

Program powinien definiować funkcję wyświetlającą tekst Usmiech! jeden raz i wywoływać ją tyle razy,
ile jest to potrzebne */

#include <iostream>
using namespace std;

void a() {
	cout << "Usmiech!";
}
int main()
{
	a(); a(); a(); cout << "\n";
	a(); a(); cout << "\n";
	a(); cout << "\n";
}
