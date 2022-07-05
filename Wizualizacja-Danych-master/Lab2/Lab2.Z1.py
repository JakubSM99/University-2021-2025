# Lab2.Z1
# Napisz skrypt, w którym tworzysz listę ulubionych sportów, 
# odwróć ją a następnie dodaj mniej lubiane sporty na sam koniec.

a = int(input('ile masz ulubionych sportow? '))
list=[]
b=0
while a > b:
    print('podaj nazwe sportu',b+1, ': ')
    i = input()
    list.append(i)
    b=b+1

list.reverse()

c = int(input('ile masz mniej lubianych sportow? '))
d=0
while c > d:
    print('podaj nazwe sportu',d+1, ': ')
    i = input()
    list.append(i)
    d=d+1

print('Twoje sporty: ')
for x in list[::1]:
    print(x)