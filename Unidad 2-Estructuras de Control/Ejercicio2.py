#Autores: Programa realizado por el Equipo2_CodePain
#Version 1.1
# Este programa recibe dos numeros y nos dice cual es mayor, menor o si ambos son iguales.


#Entrada: Declaración de variables y lectura de dos numeros

aNum = 0 
bNum = 0 
iguales =  "Son iguales" 
aNum = float(input()) 
bNum = float(input()) 


#Proceso: Comparacion de numeros
#Salida: impresion de quien es mayor, menor o si son iguales

if aNum > bNum:
    print(str(aNum) + " > " + str(bNum)) #La primera salida es el numero mas grande y la segunda el mas chico
elif (aNum < bNum):
    print(str(bNum) + " > " +  str(aNum)) #La primera salida es el numero mas grande y la segunda el mas chico
else: 
    print(iguales)
