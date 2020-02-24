# Autor: Farid Espadas Escalante

# Entrada | numero entero;
# Procesos | determinar si el numero es primo o no
# Salida | str "Es primo" o "no es primo"

def esprimo(numero_inicial): 
    if numero_inicial < 1:
        return False
    elif numero_inicial == 2:
        return True
    else:
        for i in range (2, numero_inicial):
            if numero_inicial % i == 0:
                return False
        return True

# Entrada | leemos el numero
numero_inicial = int(input())
salida = esprimo(numero_inicial)

#Salida | imprime si es primo o no 
if salida is True:
    print("Es primo")
else:
    print("No es primo25")


