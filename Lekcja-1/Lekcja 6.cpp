#include <iostream>
using namespace std;
int main (){
	
	
	short liczba;
	cout << "Podaj liczbę";
	cin >> liczba;
	
	while  (liczba > 0){
	cout << liczba << " , ";
	liczba = liczba / 2;	
	}
	
	cout << endl;
	system ("pause");
	
	
	
}