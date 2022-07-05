# Lab3.Z6
# Zdefiniuj funkcję która będzie liczyć iloczyn elementów ciągu.
# Parametry funkcji a1 (wartość początkowa), b (wielkość o ile mnożone są kolejne elementy), ile (ile elementów ma mnożyć)
# Ponadto funkcja niech przyjmuje wartości domyślne: a = 1, b = 4, ile = 10

a = int(input('Podaj wartosc poczatkowa: '))
b = int(input('Podaj wielkosc o ile mnozone sa kolejne elementy: '))
ile = int(input('Podaj ile elementow ma mnozyc: '))

list = []

count = 1

while ile > 0:
    list.append(a)
    a = a*b
    ile = ile-1

for x in list[::1]:
    count = count * x

print('Tak wygladaja wszystkie elementy: ')

for x in list[::1]:
    print(x)

print('Oto suma wszystkich elementow: ')

print(count)