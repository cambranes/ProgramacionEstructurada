# Autor: Farid Espadas

# Entrada | numero entero para saber cuantos primos sumar
# Salida | numero entero que sea la suma de los numeros primos

#Funcion para saber si es primo o no 
def esprimo(numero_Inicial):
#Primero consideramos si el número es menor que uno
    if numero_Inicial < 1:
        return False
    elif numero_Inicial == 2:
        return True
    else:
        for i in range (2, numero_Inicial):
            if numero_Inicial % i == 0:
                return False
        return True

n = input() #Leemos los n numeros primos a sumar 
contador = 0
i = 0
suma_Primos = 0 

while contador <= int(n):
    if esprimo(i) is True:
        contador = contador + 1
        suma_Primos = suma_Primos + int(i)
    i = i + 1

print(suma_Primos)
