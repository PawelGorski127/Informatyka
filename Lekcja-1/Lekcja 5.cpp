#include <iostream>
using namespace std;

int main(){
     
    // petla while
    // while(warunek-konczacy)    
    short a = 720;
    while(a > 384){
        cout << a << ", ";
        a -= 1;
    }
    cout << endl;

    short liczba = 720;
    while(liczba != 384){
        cout << "Podaj liczbe: ";
        cin >> liczba;
    }
    
    cout << endl << endl;
    short liczba2;
    do{
        cout << "Podaj liczbe: ";
        cin >> liczba2;
    }while(liczba2 != 21 );

   
 

cout << endl;
system("pause");
}