#Entradas: valorPresenteInvertido,tasaDeInterés,númeroDePeriodosDeInversión
#Salida: valorFuturo
valorPresenteInvertido=int(input("Ingrese el valor de la inversión: "))
tasaDeInterés=int(input("Ingrese la tasa de interés con un valor entero: "))
númeroDePeriodosDeInversión=int(input("Ingrese el número de periodos de inversión: "))

valorFuturo = valorPresenteInvertido*(1+(tasaDeInterés/100))*(númeroDePeriodosDeInversión)
print("El valor futuro de la inversión original es de ",valorFuturo)
print(0)

#Código hecho por Ileana Castillo del Equipo 5
