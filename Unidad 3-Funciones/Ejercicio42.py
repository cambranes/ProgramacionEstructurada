#Ejercicio #42
#Escribe el programa que calcule las raíces cuadradas de los cien primeros números naturales. Como resultado se desean dos columnas de valores: #
#En la primera columna se escribirán los números naturales y en la segunda sus raíces correspondientes.
#Pamela Citlali Canul Chacón (Equipo 'about:blank')

#El problema no necesita entradas 

#Proceso
import math 
#Se define la funcion
def raiz (numRaiz,num):
    #Se obtiene la raiz
    for num in range (1,101):
        numRaiz=math.sqrt(num)
        print (num)
        print (numRaiz)
#Salida 
print (raiz (numRaiz=0,num=0))