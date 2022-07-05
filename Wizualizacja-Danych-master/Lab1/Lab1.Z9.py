# Lab1.Z9
# Napisz skrypt, w którym zadeklarujesz zmienne typu: string, float i szestnastkowe. 
# Następnie wyświetl je wykorzystując odpowiednie formatowanie.


#Definiowanie zmiennych
a = 0xAfe
b = 0XAaa
c = 'AFAF'
d = 'afaf'
e = 0.7890
f = 3.14152829

# drukowanie typu zmiennej
print("typy zmiennych:")
print("typ a: ", type(a))
print("typ b: ", type(b))
print("typ c: ", type(c))
print("typ d: ", type(d))
print("typ e: ", type(e))
print("typ f: ", type(f))

# drukowanie wartości zmiennej
print("wartosci zmiennych:")
print('wartosc a:', a)
print('wartosc a w typie szesnastkowym:', hex(a))
print('wartosc b:', b)
print('wartosc b w typie szesnastkowym:', hex(b))
print('wartosc c:', c)
print('wartosc d:', d)
print('wartosc e:', e)
print('wartosc f:', f)
