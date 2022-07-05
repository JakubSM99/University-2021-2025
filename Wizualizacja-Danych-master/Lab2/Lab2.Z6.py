# Lab2.Z6
# Wczytaj trzy liczby całkowite a,b,c i sprawdź,
# która z nich jest największa. 
# W zależności od wyniku wyświetl odpowiedni komunikat. 
# Użyj zagnieżdżeń.

i = input('Podaj 3 liczby calkowite, oddzielajac je spacja: ')

a = [int(x) for x in i.split()]

b = max(a)

print('Liczba:', b, 'jest najwieszka!')
