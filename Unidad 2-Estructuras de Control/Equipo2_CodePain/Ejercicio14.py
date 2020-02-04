#Este programa lee una velocidad y determina si es mayor a 100, imprime "muy rapido" y si es cero, imprime "detenido"


#Inicio de declaración e inicialización de variables
vel = 0 #Variable que almacenara la velocidad
#Fin de declaración e inicialización de variables


#Inicio lectura de velocidad
#Entrada: Cualquier número real positivo 
vel = float(input()) #Leer velocidad


#Condicion por si pone velocidad negativa
#Salida: "Error, ingrese otro número"
#Entrada: Cualquier número real positivo
while (vel < 0 ):
    print("Error, ingrese otro número")
    vel = float(input())


#Condiconal para determinar si es mayor a cien o cero la velocidad
#Salida: "Muy rápido" o "Detenido" o nada si no es cero o mayor a cien
if (vel > 100):
    print("Muy rápido")
elif (vel == 0):
    print("Detenido")