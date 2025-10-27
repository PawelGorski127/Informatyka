import math

n = int(input("Wprowadź liczbę: "))
d = 2

if n < 2:
    print("Podana liczba nie jest liczbą pierwszą")

else:
    while d <= math.sqrt(n):
        if n % d == 0:
            print("Twoja liczba nie jest liczbą pierwszą")
            break
        d += 1
    else:
        print("Twoja liczba jest liczbą pierwszą")