# Ejercicio 7
# Escribir el programa para un programa que reciba un numero positivo, si este numero es mayor a 1000 se le sumara un 5%, si el numero es mayor a 3000 se le sumara otro 10% adicional y si el numero es mayor a 5000 se le sumara otro 5% adicional.
# Autor: Jorge Reyes (Equipo 'about:blank')

# Dato de entrada: valor numérico
# Dato de salida: valor numérico con el agregado correspondiente

def percentageCalc(num):
    # Se asigna el valor de entrada a la variable "result"
    result = num

    # Compara y re-asigna valores
    if (num > 1000):
        result += num * .05
    if (num > 3000):
        result += num * .1
    if (num > 5000):
        result += num * .05

    return int(result)

inp = int(input())
print(percentageCalc(inp))
