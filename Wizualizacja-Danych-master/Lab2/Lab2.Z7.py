# Lab2.Z7
# Napisz skrypt, gdzie stworzysz listę składającą się z liczb typu int i float. 
# Następnie za pomocą użycia pętli for podnieś każdą liczbę do kwadratu.

lista = [1, 2.0, 3, 4.5, 8, 9.3]
list = []
for x in lista[::1]:
    x = x**2
    list.append(x)

for x in list[::1]:
    print(x)