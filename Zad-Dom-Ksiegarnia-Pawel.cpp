#include <iostream>
using namespace std;

int wybor;
int Ksiegarnia ksiazki[ 7 ] =
{
    { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    { "Tytul7", "autor1", 1931, "Helion1", 29.54 },
};

struct ksiazki
{
    
    string nazwa;
    string wydawnictwo;
    string cena;
    string autor;
    string rok;
    
int main(){

cout << "Witaj w księgarni, tutaj mozesz wyszukac dostępne w tej bibliotece ksiazki" << endl;
cout << "Wybierz najpierw po czym chcesz wyszukać książkę:" << endl;
cout << "1. Nazwa" << endl;
cout << "2. wydawnictwo" << endl;
cout << "3. Cena" << endl;
cout << "4. autor" << endl;
cout << "5. rok" << endl;
cout << "6. Wyjscie" << endl;
cin >> wybor;
}

// niestety nie wiem jak zrobic tak żeby był wybór, jedynie umiem coś takiego zrobić :(
// wczesniej powinno być chyba coś z voidem (wiem ze względu na to co compiler mówi) ale nie wiem niestety co :( 

switch(wybor)
    {
    case 1:
    	cout << "Podaj nazwe ksiazki";
    	cin >> nazwa;
    	if (nazwa < Tytul1) cout << "Brak Wyniku" << endl;
        break;
    case 2:
        cout << "Podaj wydawnictwo:";
        cin >> wydawnictwo;
        if ( Wydawnictwo < Helion1) cout << "Brak Wyniku" << endl;
        break;
    case 3:
        cout << "Podaj cenę:";
        cin >> cena;
        if (cena < 23.54) cout << "Brak Wyniku" << endl;
        break;
    case 4:
    	cout << "Podaj Autora:";
    	cin >> autor;
    	if (autor < autor1) cout << "Brak wyniku" << endl;
    	break;
    case 5:
		cout << "Podaj Rok wydania:";
		cin >> Rok;
		if (Rok < 1925) cout << "Brak Wyniku" << endl;
		break;
	case 6:
		cout << Ksiegarnia ksiazki;
		break;	
	default:
		cout << "Blad" << endl;
		break;
	}
    return 0; 
	
}
