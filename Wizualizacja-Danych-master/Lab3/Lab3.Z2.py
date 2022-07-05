# Lab3.Z2
# Wygeneruj losowo 10 elementów, zapisz je do listy1, 
# następnie wykorzystując Python Comprehension zdefiniuj nową listę, 
# która będzie zawierała tylko parzyste elementy

import random

d = int(input('podaj ile liczb losowych chcesz otrzymac: '))

list = []

while d > 0:
    a = random.random()
    b = random.random()
    aa = 10**(int(len(str(a)))-2)
    i = int(-(a * aa))
    j = int(b * aa)
    c = random.randint(i, j)
    if c < 0:
        c = c*(-1)
        list.append(c)
    else:
        list.append(c)
    d = d-1

print('Oto twoja lista: ')
for x in list[::1]:
    print(x)

newlist=[x for x in list if x % 2 ==0]

print('Lista samych liczb parzystych: ')
for x in newlist[::1]:
    print(x)