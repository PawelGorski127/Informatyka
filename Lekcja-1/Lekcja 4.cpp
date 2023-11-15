#include <iostream>
using namespace std;
int main(){

int Szerokosc, Wysokosc;
cout <<"Podaj szerokosc" <<  endl;
cin >> Szerokosc;
cout << "Podaj wysokosc";
cin >> Wysokosc;
    
for (int i=0; i < Wysokosc; i++ ){ // tutaj jest wysokość kwadratu
for (int j=0; j < Szerokosc; j++){ // tutaj jest szerokość kwadratu

if (Wysokosc == 0 || i == Wysokosc -1 ) // Pierwszy 'if' w którym znajduje się warunek  

cout << "*";

else if (j == 0 || j == Szerokosc -1) // Drugi 'if' w którym znajduje się warunek

cout << "*";

else
cout << " ";
	
    }
	
	cout << endl;
  }


}

	











