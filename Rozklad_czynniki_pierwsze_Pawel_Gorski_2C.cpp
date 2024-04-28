#include <iostream>
using namespace std;
int main(){
int a;
    
cout << "Podaj liczbe: ";
cin >> a;
    
cout << "Oto czynniki pierwsze twojej liczby: " << endl;
for (int b = 2; a > 1; ++b) {
while (a % b == 0) {
cout << b << " ";
a /= b;
}
}
    
return 0;
}
