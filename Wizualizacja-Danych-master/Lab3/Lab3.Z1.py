# Lab3.Z1
# Zdefiniuj następujące zbiory, wykorzystując Python comprehension:
# A = {1-x: x∈<1,10>}
# B = {1,4,16,…,47}
# C = {x: x∈B i x jest liczbą podzielną przez 2}

listA = []

x = 1

while x <= 10:
    a = 1-x
    listA.append(a)
    x=x+1

print('Tak wyglada zbior A = {1-x: xE<1,10>}')

for x in listA[::1]:
    print(x)

listB = []

y=0

while y<=7:
    b=4**y
    listB.append(b)
    y=y+1

print('Tak wyglada zbior B = {1,4,16,...,4^7}')

for x in listB[::1]:
    print(x)

listC = [x for x in listB if x % 2 ==0]

print('Tak wyglada zbior C = {x:xEB i x jest liczba podzielna przez 2}')

for x in listC[::1]:
    print(x)