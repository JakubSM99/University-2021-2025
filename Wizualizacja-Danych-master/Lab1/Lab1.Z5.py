# Lab1.Z5
# Zapisz swoje imie i nazwisko w oddzielnych zmiennych wszystkie wielkimi literami. 
# Użyj odpowiedniej metody by wyświetlić je pisane tak, że pierwsza litera jest wielka a pozostałe małe. 
# (trzeba użyć metody capitalize)

a = input('podaj swoje imie wielkimi literami: ')
b = input('podaj swoje nazwisko woelkimi literami: ')

print('Imie i nazwisko przed zmiana: ', a, b)

c = a.capitalize()
d = b.capitalize()

print('Imie i nazwisko po zmianie: ', c, d)