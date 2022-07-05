# Lab2.Z8
# Napisz skrypt, który za pomocą pętli while pobiera 10 liczb, 
# następnie dodaje do listy tylko parzyste liczby.

a = 10
fullist = []
list = []
while a > 0:
    i = int(input('podaj liczbe: '))
    fullist.append(i)
    if i % 2 == 0:
        list.append(i)
    a = a-1
print('pelna lista: ')
for x in fullist[::1]:
    print(x)
print('lista z tylko parzystymi liczbami: ')
for x in list[::1]:
    print(x)