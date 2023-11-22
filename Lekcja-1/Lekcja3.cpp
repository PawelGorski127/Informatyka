#include <iostream>
using namespace std;

int main(){

for (int i=102; i <= 999; i++ ){
	for (int j=999; j <= 999; j++){ //jest to program zawierający podwójny "for"
    if (i >= 100)  cout << (i - 9);
   else  cout << (i == 102);
	cout << i << " * " << j << " = " << i*j << endl;    

}
cout << endl;
}
system ("pause");	
	


}
// jest to program wykonujący tabliczkę mnożenia do 10 