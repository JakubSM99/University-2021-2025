# Lab3.Z7.
# Napisz funkcje za pomoca operatora *, która wykona te same działanie co w zadaniu 6.


a = int(input('Podaj wartosc poczatkowa: '))
b = int(input('Podaj wielkosc o ile mnozone sa kolejne elementy: '))
ile = int(input('Podaj ile elementow ma mnozyc: '))

def iloczyn(a,b,ile):
    count = 1
    while ile > 0:
        count = count*a
        a = a*b
        ile = ile-1
    print(count)

iloczyn(a,b,ile)