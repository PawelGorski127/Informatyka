baza = int(input("Podaj baze: "))
wykladnik = int(input("Podaj teraz wykladnik: "))
def potegowanie(baza, wykladnik):
    if wykladnik == 0:
        return 1
    elif wykladnik % 2 == 0:
        return potegowanie(baza * baza, wykladnik // 2)
    else:
        return baza * potegowanie(baza, wykladnik - 1)

if wykladnik == 0:
    print("Kazda liczba do potegi 0 wynosi 1, wiec wynik to 1")
else:
    wynik = potegowanie(baza, wykladnik)
    print(f"{baza}^{wykladnik} = {wynik}")