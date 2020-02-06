#Autores: Programa realizado por el Equipo2_CodePain
#Version 1.0
#Programa que suma los primeros n números pares

#Entrada: Lectura de cantidad de numeros
nNums=-1
totalSuma=0

while nNums<0: #Comprobador de secuencia prositiva
    nNums=int(input())

#Proceso: Formula de n numeros pares
totalSuma=nNums*(nNums+1)

#Salida: Total de la suma
print(int(totalSuma))
