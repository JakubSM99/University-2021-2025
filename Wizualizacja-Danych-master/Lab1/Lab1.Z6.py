# Lab1.Z6
# Napisz skrypt, gdzie w zmiennej string zapiszesz fragment tekstu piosenki z powtarzającymi się słowami np. „la la la”. 
# Następnie użyj odpowiedniej funkcji, która zliczy występowanie słowa „la”. 
# (trzeba użyć metody count)

# Piosenka: Mata ft. White 2115 - La la la (oh oh)
# Część piosenki: Refren

a = 'la la la la la la la la la la la la la la Teraz śpiewaj z nami la la la la la la la la la la la la la la la la la la la la la la la la la la la la la la la la la la la la'

count = a.count('la')

print(count)