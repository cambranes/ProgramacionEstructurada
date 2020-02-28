#Ejercicio 4
#Escribir un programa que lea un número y redondee a la centena próxima.
#Autor: Gildardo Maldonado (Equipo 5)
#Entrada: Un número entero
#Salida: El redondeo a centena de ese número


#Funciones

#Entrada:
def entrada_Num(numerito):
    numerito = int(input('Dame un numero, lo redondearemos a su centena: '))
    return numerito

#Esta función guarda la centena para hacer el redondeo al final
def guardar_Centena(centena):
    if centena > 100:
        centena = centena//100
    else: 
        centena = 1
    return centena
        
#Aquí le quitamos las centenas al número, ya que solo queremos el dígito de sus decenas
def conv_Decenas(numero):
    if numero >= 100:
        numero = numero//10
    return numero

#Aquí guardamos el dígito de las decenas, nos servirá para comparar
def digito_Decenas(decena):
    decena = decena%10
    return decena

#Esta función compara el dígito de las centenas con 5, y redondea a su centena más próxima
def redondeo_Centena(decena, centena):
    if decena >= 5:
        centena = (centena + 1)*100
    else:
        centena = centena*100
    return centena

#Salida
def imprimir_Salida(centena):
    print(centena)

#Inicialización de las variables
cent = 0
dec = 0
dig = 0
redn = 0
num = 0

#Entrada
num = entrada_Num(num)

#Proceso
cent = guardar_Centena(num)
dec = conv_Decenas(num)
dig = digito_Decenas(dec)
redn = redondeo_Centena(dig, cent)

#Salida
imprimir_Salida(redn)




        




        
        

        
    

    