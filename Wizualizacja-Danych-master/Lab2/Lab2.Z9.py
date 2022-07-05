# Lab2.Z9
# Napisz skrypt, który liczy pierwiastek z liczby podanej przez użytkownika. 
# Jeśli użytkownik poda wartość ujemną to powinien być wyłapany błąd.

a = int(input('podaj liczbe: '))

def spr(a):
    b = 1.0 / 2.0
    if a<0:
        return 'wylapalem blad'
    elif a==0:
        return 0
    elif a>0:
        return a**b

print(spr(a))