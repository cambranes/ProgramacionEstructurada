i = 0 
cont = 0
num = 0

num = int(input())

for i in range(1, num):
    if num%i == 0:
        cont = cont + 1

if cont == 2:
    print("Es primo")
else: 
    print("No es primo")