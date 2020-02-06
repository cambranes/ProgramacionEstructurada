# Este programa recibe dos números y nos dice cual es mayor, menor o si ambos son iguales.


#Inicio declaración de variables

aNum = 0 #Primer número a leer
bNum = 0 #Segundo número a leer 
iguales =  "Los números son iguales" #String que se imprime si ambos números son iguales 

#Fin declaración de variables


#Inicio de lectura de números 
#Entrada: cualquier número real

aNum = float(input()) #Leer primer número 
bNum = float(input()) #Leer segundo número


#Inicio condicionales para asignación e impresión de quien es mayor, menor o si son iguales 
#Salida: impresión de quien es mayor, menor o si son iguales


if aNum > bNum:
    print(str(aNum) + " > " + str(bNum)) #La primera salida es el número más grande y la segunda el más chico
elif (aNum < bNum):
    print(str(bNum) + " > " +  str(aNum)) #La primera salida es el número más grande y la segunda el más chico
else: 
    print(iguales)
