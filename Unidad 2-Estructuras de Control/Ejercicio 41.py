<<<<<<< HEAD
#Ejercicio 41 - 
#Autor: Jorge Limón
#Entrada: Cantidad de números por evaluarse y los números en sí
#Salida: El número mayor y el menor de los números dados
n = int(input("¿Cuántos Números va a usar?")) 
#N números
for x in range (0, n):
    numero = int(input("Ingrese un número:")) 
    #Se verifica cuales son mayores y menores para reemplazarse entre sí conforme se superen
    if x == 0:
        mayor = numero
        menor = numero
        #Me basé para esto en el ejemplo encontrado en el repositorio para el primer número a comparar
    if numero > mayor:
        mayor = numero
    else:
        if numero < menor:
            menor = numero
print("El número mayor es: ", mayor, " y el menor es: ", menor, ".") 
#Se imprimen el menor y el mayor
        
=======
#Ejercicio 41 - 
#Autor: Jorge Limón
#Entrada: Cantidad de números por evaluarse (n) y los números en sí (numero)
#Salida: El número mayor y el menor de los números dados
n = int(input()) 
#Se pide la cantidad de N números para generar la for loop
for x in range (0, n):
    numero = int(input()) 
    #Se pide que se ingrese un número para analizarse y comprararse en el trono
    #Se verifica cuales son mayores y menores para reemplazarse entre sí conforme se superen
    if x == 0:
        mayor = numero
        menor = numero
        #Me basé para esto en el ejemplo encontrado en el repositorio para el primer número a comparar
    if numero > mayor:
        mayor = numero
    else:
        if numero < menor:
            menor = numero
print(mayor,  menor) 
#Se imprimen el menor y el mayor
>>>>>>> b59401ad4195ebbde55d550f0d4ba0b9ab9a1219
