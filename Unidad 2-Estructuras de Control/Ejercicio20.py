#Autores: Programa realizado por el Equipo2_CodePain
#Version 1.2
#Programa que determina el valor de una secuencia 1 a N

#Entrada: Limite de la secuencia (nNums) (entero)

nNums=-1
total=0
while nNums<0: #Cantidad de numeros positivos
    nNums=int(input())

#Proceso: Se obtiene el valor de la secuencia al sumar cada numero empezando por 1

total=(nNums*(nNums+1))/2

#Salida: La suma total de la secuencia de números
print(int(total))