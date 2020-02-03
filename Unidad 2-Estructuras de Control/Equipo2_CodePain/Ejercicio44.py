#Autores: Programa realizado por Equipo2_CodePain
#Programa que calcula el MCD de dos números enteros mediante el algoritmo de Euclides


aNum=-1
bNum=-1
res=1
save=0


#Entrada: Dos números enteros aNum y bNum
#Proceso: Usando el algoritmo de Euclides se determina el MCD de los números
while aNum<0 or bNum<0:
    aNum=int(input())
    bNum=int(input())

if aNum<bNum:
    save=bNum
    bNum=aNum
    aNum=save

while res!=0:
    res=aNum%bNum
    aNum=bNum
    bNum=res


#Salida: El MCD de los dos números
print(aNum)