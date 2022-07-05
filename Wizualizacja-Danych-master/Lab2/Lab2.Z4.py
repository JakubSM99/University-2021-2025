# Lab2.Z4
# Napisz skrypt, który pobiera od użytkownika zdanie i liczy wystąpienia litery a. 
# Użyj funkcji input

a = input('Napisz jakies zdanie: ')

count=0

for x in a[::1]:
    if x == 'a':
        count = count +1

print(count)