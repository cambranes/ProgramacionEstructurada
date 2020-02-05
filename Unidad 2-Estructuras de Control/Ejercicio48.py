#Ejercicio #48
# Programa que lee el suldo base y antiguedad del empleado
# Calcula el incentivo con base a ello
# e imprime el sueldo base, incentivo y sueldo a pagar
#  Audny D. Correa Ceballos 

#Proceso: Definimos una funcion que servira para calcular el incentivo 
#de acuerdo a las entradas que de el usuario
def main(sueldoBase, antiguedad):
    #inicializar el incentivo en 0
    incentivo = 0
    if (antiguedad >= 1 and antiguedad <= 3):
        incentivo = sueldoBase * 0.01
    elif (antiguedad >= 4 and antiguedad <= 6):
        incentivo = sueldoBase * 0.03
    elif (antiguedad >= 7 and antiguedad <= 9):
        incentivo = sueldoBase * 0.05
    elif (antiguedad >= 10):
        incentivo = sueldoBase * 0.07

    return(incentivo)

#ENTRADAS: Pedimos el salario base y la antiguedad del usuario
sueldoBase = int(input())
antiguedad = int(input())

#Es un subproceso que calcula el salario a pagar con la suma del salario inicial 
# y de acuerdo al incentivo que se obtuvo con la funcion main
sueldoaPagar = main(sueldoBase, antiguedad) + sueldoBase

#SALIDAS: 
#El sueldo base que el usuario ingreso el principio de la funcion
print("Sueldo Base:", sueldoBase)
#El incentivo que se calcul'o en la funcion main
print("Incentivo:", main(sueldoBase, antiguedad))
#Sueldo a pagar 
print("Sueldo a pagar:", sueldoaPagar)