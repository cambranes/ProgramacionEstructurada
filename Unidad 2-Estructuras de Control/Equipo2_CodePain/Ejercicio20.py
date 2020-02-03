#Autores: Programa realizado por el Equipo2_CodePain
#Programa que determina el valor de una secuencia 1 a N


nNums=-1
total=0

#Entrada: Límite de la secuencia (nNums)
#Proceso: Se obtiene el valor de la secuencia al sumar cada número empezando por 1
while nNums<0:
    nNums=int(input())

total=(nNums*(nNums+1))/2


#Salida: La suma total de la secuencia de números
print(total)