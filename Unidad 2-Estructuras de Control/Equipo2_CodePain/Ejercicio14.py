#Este programa lee una velocidad y determina si es mayor a 100, imprime "muy rapido" y si es cero, imprime "detenido"

#Inicio de declaración e inicialización de variables

vel = 0 #Variable que almacenara la velocidad

#Fin de declaración e inicialización de variables

#Inicio lectura de velocidad

vel = float(input()) #Leer velocidad

#Fin lectura de velocidad

#Inicio para determinar si la velocidad es mayor a 100 o cero

if (vel > 100):
    print("Muy rápido")
elif (vel == 0):
    print("Detenido")

#Fin para determinar si la velocidad es mayor a 100 o cero