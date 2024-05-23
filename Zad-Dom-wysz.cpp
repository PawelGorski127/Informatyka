#include <iostream>
using namespace std;

int main() {
char tab[] = {2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
int b;
cout << "Jaka liczbe poszukujesz? " << endl;
cin >> b;
    
cout << "Poszukiwana liczba znajduje sie na pozycji: " << endl;
for(int i = 0; i < sizeof(tab); ++i) {
if(tab[i] == b) {
cout << i << " ";
}
}
cout << endl;

return 0;
}
