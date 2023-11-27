#include <iostream>

int main() {
    int count = 0; 

    // Pętla przechodząca przez liczby od 102 do 987 (po części wzięte z innej mojej pracy)
    for (int i = 102; i <= 987; ++i) {
        // Rozdzielenie liczby na cyfry setek, dziesiątek i jedności
        int hundreds = i / 100;        // Cyfra setek
        int tens = (i / 10) % 10;      // Cyfra dziesiątek 
        int units = i % 10;            // Cyfra jedności

        // Sprawdzenie czy cyfry się nie powtarzają (użyłem tutaj pomocy Chatgpt)
        if (hundreds != tens && hundreds != units && tens != units) {
            std::cout << i << " ";     
            count++;                   
        }
    }

    
    std::cout << "\Liczba liczb 3-cyfrowych bez powtorzen: " << count << std::endl;

    return 0;
}
