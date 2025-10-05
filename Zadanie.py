tab = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]
szukana = int(input("wprowadz liczbe:"))

l = 0
p = len(tab) - 1
pozycja = -1

while l <= p:
    sr = (l + p) // 2

    if tab[sr] == szukana:
        pozycja = sr
        break
    elif tab[sr] > szukana:
        p = sr - 1
    else:
        l = sr + 1
    
if pozycja != -1:
    print(f"Liczba {szukana} wystepuje w indeksie o numerze {pozycja}")
else:
    print("Wpisana liczba nie wystepuje w zbiorze")
