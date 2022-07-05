# Lab3.Z8
# Napisz funkcję, która wykorzystuje symbol **. 
# Funkcja ma przyjmować listę zakupów w postaci: klucz to nazwa produktu a wartość to jego koszt. 
# Funkcja ma zliczyć ile jest wszystkich produktów w ogóle i zwracać całościową wartość tych produktów.

Zakupy = {
    'Mleko':2.5,
    'Chleb':2.0,
    'Ziemniaki':3.0,
    'Chipsy':5.0,
    'Piwo':2.5,
    'Orzeszki':3.0,
    }

def funkcja(a):
    list = []
    count = 0
    print('Wszystkich produktow lacznie jest: ', len(a))
    for key, value in a.items():
        list.append(value)
    for x in list[::1]:
        count = count + x
    print(count)

funkcja(Zakupy)