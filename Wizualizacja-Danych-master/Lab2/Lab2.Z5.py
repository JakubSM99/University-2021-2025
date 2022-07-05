# Lab2.Z5
# Napisz skrypt gdzie pobierzesz trzy liczby całkowite, 
# gdzie wykonasz obliczenia: a**b + c.
# Użyj instrukcji readline() i write()).

i = input('Podaj 3 liczby calkowite, oddzielajac je spacja: ')

f = open("myfile.txt", "w")
f.write(i)

f = open("myfile.txt", "r")
a = [int(x) for x in f.read().split()]

b= a[0]**a[1]+a[2]

print('twoj wynik to:', b)