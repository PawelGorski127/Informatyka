#include <iostream>
using namespace std;
// Jest tylko jeden błąd, nie wiem gdzie postawić tego "{" żeby to działało
{
    int pozycja;
    int tablica[25];
    int rozmiar;
    for (int i = 0; i < rozmiar; ++i) {
        if (tablica == szukana) {
            pozycja = i;           
        }
    }
    if (pozycja = 0) {
        cout << "Poszukiwana liczba znajduje sie na pozycji: " << pozycja << endl;
    } else {
        cout << "Poszukiwana liczba nie znajduje sie w tablicy." << endl;
    }
}
int main() {
    int tablica[] = {2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
    int rozmiar = sizeof(tablica[25]);
    int szukana;
    cout << "Jaka liczbe poszukujesz: ";
    cin >> szukana;
    cout << szukana << tablica << rozmiar << endl;
    return 0;
}
