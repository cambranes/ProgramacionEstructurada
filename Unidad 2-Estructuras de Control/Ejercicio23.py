#Ejercicio 23
#Determinar la serie siguiente:
#a. e^x = 1 + x + x^2/2! + x^3/3! + … + x^n/n!

#Autor: Gildardo Maldonado (Equipo 5)
#Entrada: Número flotante x y entero n
#Salidas: resultado de la sustitución de los números en la fórmula 
print('Calcularemos el valor de e^x = 1 + x + x^2/2!...x^n/n!')
#Se solicita los valores para x y n
aValorx = float(input('Dame el valor de x: '))
aValorn = int(input('Dame el valor de n (que sea entero): '))
#La formula lleva un 1 desde el principio
aValordee = 1
#Contador
aContadori = 0
#Variable de factorial
aFactorial = 1

#Ciclo para resolución del problema
while aContadori < aValorn:
    aContadori = aContadori + 1
    aFactorial = aFactorial * aContadori
    aValordee = aValordee + (aValorx**aContadori)/(aFactorial)
#Imprime el resultado
print(aValordee)
  
