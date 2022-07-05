/*Napisz program, dający w wyniku następujący tekst:
Panie Janie!
Panie Janie!
Rano Wstań!

Niech program wykorzystuje dwie dodatkowe (poza main()) funkcje:
Jedną wyświetlającą jednokrotnie tekst "Panie Janie!" i
Drugą, wyświetlającą ostatni z podanych wyżej wierszy.*/

#include <iostream>
using namespace std;

void a() {
	cout << "Panie Janie!\n";
}
	
void b() {
	cout << "Rano wstan!\n";
}

int main()
{
	a();
	a();
	b();

}
