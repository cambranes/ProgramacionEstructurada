#Autor: Deyberth Carrillo
#Entrada: El numero del cual se desean conocer los factoriales
#Salida: Los factoriales del numero ingresado

#Se solicita el numero a evaluar
print("Ingrese el numero del cual desea saber sus factoriales:")
numero=int(input())
factores=str(1)
posibleFactor=0
#Se evaluan los factores del numero que se ingreso
for posibleFactor in range(2,numero+1):
    esFactor=numero%posibleFactor
    if esFactor==0:
        factores+=","+str(posibleFactor)

#Se imprimen los facores del numero que se ingreso
print("Los factores de "+str(numero)+" son: "+str(factores))