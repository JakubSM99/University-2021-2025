# Lab1.Z3
# Napisz skrypt, w którym stworzysz operatory przyrostkowe dla operacji: +, -, *, /, **, %

a = int(input('podaj pierwsza cyfre: '))
b = int(input('podaj druga cyfre: '))


def  dodawanie(j,i):
    print('dodawanie: ', j+i)

def odejmowanie(j,i):
    print('odejmowania: ', j-i)

def mnozenie(j, i):
    print('mnozenie: ', j*i)
    

def dzielenie(j,i):
    print('dzielenie: ', j/i)

def potega(j,i):
    print('potega: ', j**i)

def reszta(j,i):
    print('reszta: ', j%i)

print(dodawanie(a,b), odejmowanie(a,b), mnozenie(a,b), dzielenie(a,b), potega(a,b), reszta(a,b))