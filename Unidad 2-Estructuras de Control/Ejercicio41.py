#Ejercicio 41 - 
#Autor: Jorge Limón
#Entrada: Cantidad de números por evaluarse y los números en sí (n y numero)
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
        