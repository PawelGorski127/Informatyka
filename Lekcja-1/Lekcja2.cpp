# include <iostream>
using namespace std;

int main (){
	
	
// liczby całkowite - int, short, long, unsigned short (ciąg znaków - string) 		
	
short a, b;	
cout << "Podaj a: ";
cin >> a;	

cout << "Podaj b: ";
cin >> b;
// != różne od (a != b) -> czy 4 jest różne od 5 (tak)
// instrukcją warunkową jest - if(warunek)
if(a > b){
cout << a << ">" << b; //cout << zmienna << tekst << zmienna;
}
else if(a == b){ // sprawdzanie kolejnego warunku
cout << "a == b";
}

 else{ //jeżeli żaden z powyższych warunków się nie spełni to wykona else ( w przeciwnym razie)
 cout << a << "<" << b;
}
}

