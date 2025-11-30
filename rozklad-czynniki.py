def rozklad():
    n = int(input("Wprowadź liczbę n: "))
    k = 2

    print("Czynniki pierwsze:")

    while n > 1:
        while n % k == 0:
            print(k)
            n //= k
        k += 1

rozklad()