#include <iostream>
using namespace std;
int main(){
// Zadanie 5	
int szerokosc, wysokosc;

cout << " Podaj szerokosc: ";
cin >>  szerokosc;

cout << " Podaj wysokosc: ";
cin >> wysokosc;

for (int i = wysokosc;  i > 0; --i) {

for (int j = szerokosc; j < wysokosc - i; ++j) {
cout << " ";
}

for (int k = 0; k < 2 * i - 1; ++k) {
}
cout << "* ";
}
cout << endl;
	
return 0;
	
}
// Program nie działa tak jak powinien, próbowałem zmieniać kod oraz znaleść odpowiedź na różnych forach lecz nie znalazłem odpowiedzi
// Jeżeli miałby pan czas, doceniłbym gdyby może pan znalazł problem i napisałby w opinii zadania na teamsach bym mógł uniknąć tego błędu następnym razem
// Mam nadzieję że poprawi mi pan na chociaż 40% bo może i program nie działa poprawnie ale został on tym razem w pełni napisany przeze mnie :)
