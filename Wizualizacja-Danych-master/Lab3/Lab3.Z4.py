# Lab3.Z4
# Zdefiniuj funkcje, która sprawdzi czy trójkąt jest prostokątny.

a = (int(input('podaj dlugosc pierwszego (nie najdluzszego) boku: ')))**2
b = (int(input('podaj dlugosc drugiego (nie najdluzszego) boku: ')))**2
c = (int(input('podaj dlugosc trzeciego (najdluzszego) boku: ')))**2



def TrojkatProstokatny(a, b, c):
    if a + b == c:
        print('Trojkat jest prostokatny!')
    else:
        print('Trojkat nie jest prostokatny!')

TrojkatProstokatny(a, b, c)