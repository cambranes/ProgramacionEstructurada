print("Este programa recibe dos números y nos dice cual es mayor, menor o si ambos son iguales." + "\n")

#Inicio declaración de variables

aNum = 0 #Primer número a leer
bNum = 0 #Segundo número a leer 

#Fin declaración de variables

#Inicio de lectura de números 

aNum = float(input("Ingrese el primer número: " + "\n"))
bNum = float(input("Ingrese el segundo número: " + "\n"))

#Fin lectura de números 

#Inicio condicionales para asignación e impresión de quien es mayor, menor o si son iguales 

if aNum > bNum:
    print("El número mayor es " + str(aNum) + " y el número menor es " + str(bNum))
elif (aNum < bNum):
    print("El número mayor es " + str(bNum) + " y el número menor es " + str(aNum))
else: 
    print("Ambos números son iguales")

#Fin condicionales para asignación e impresión de quien es mayor, menor o si son iguales