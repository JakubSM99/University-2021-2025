# Lab3.Z3
# Utwórz słownik z produktami spożywczymi do kupienia. 
# Klucz to niech będzie nazwa produktu a wartość - jednostka w jakiej się je kupuje (np. sztuki, kg itd.). 
# Wykorzystaj Python Comprehension do zdefiniowania nowej listy, 
# gdzie będą produkty, których wartość to sztuki.

Produkty = {
    'Marchew':'szt.',
    'Ziemniaki':'kg.',
    'Jablka':'szt.',
    'Sok':'litr',
    'Kiwi':'szt.',
    'Cebula':'kg.',
    'Woda':'litr',
    }

NaSztuki = [key for key, value in Produkty.items() if value == 'szt.']

for x in NaSztuki[::1]:
    print(x)
