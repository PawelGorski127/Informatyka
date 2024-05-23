#include <iostream>
using namespace std;

void a(int b) {
int c = 0, d = 2, e;

cout << "Rozpoczynam generowanie " << b << " pierwszych liczb pierwszych:" << endl;

while (c < b) {
for (e = 2; e <= d - 1; ++e) {
if (d % e == 0) break;
}
if (e == d) {
cout << "Znaleziono liczbe pierwsza: " << d << endl;
c++;
}
d++;
}
cout << "Wygenerowano " << b << " pierwszych liczb pierwszych." << endl;
}

int main() {
int n;
cout << "Podaj ile liczb pierwszych wygenerowac: ";
cin >> n;
a(n);
return 0;
}
