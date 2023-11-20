#include <iostream>
using namespace std;

int main(){
     
    // petla while
    // while(warunek-konczacy)    
    short a = 30;
    while(a > 0){
        cout << a << ", ";
        a -= 1;
    }
    cout << endl;

    short liczba = 0;
    while(liczba != 2){
        cout << "Podaj liczbe: ";
        cin >> liczba;
    }
    
   
 

cout << endl;
system("pause");
}