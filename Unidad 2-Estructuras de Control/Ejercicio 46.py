#Ejercicio 46 - 
#Autor: Jorge Limón
#Entrada: Verificación de si hay clientes o no, para empezar a contar cuántos clientes hubo en el día
#Salida: La cantidad de clientes, descuentos y el total recaudado
descuentos = 0
total = 0
clientes = 0
x = 1 
#X para que haya algo para comparar a n al inicio y se pueda seguir o acabar el loop dependiendo de si hay m'as clientes o no
n = 0
proseguir = str(input("¿Hay clientes?(si/no)")) 
#Si es no, para que imprima que de plano no hay clientes
if proseguir == "si":
    while n < x:
        monto = int(input("Escriba el monto a pagar para verificar si le corresponde algún descuento:")) 
        #Aquí se aplican los descuentos si hay y se le informa al comprador el precio a pagar
        if monto < 500:
            descuento = 1
        else:
            if 1000 > monto >= 500:
                descuento = .95
                descuentos = descuentos + 1
            else:
                if 7000 > monto >= 1000:
                    descuento = .89
                    descuentos = descuentos + 1
                else:
                    if 15000 > monto >= 7000:
                        descuento = .82
                        descuentos = descuentos + 1
                    else:
                        descuento = .75
                        descuentos = descuentos + 1
        monto = monto * descuento
        print("Le corresponde pagar un total de: $", monto, " pesos señor, muchas gracias.")
        total = total + monto
        n = n + 1
        clientes = clientes + 1
        continuacion = str(input("¿Hay más clientes?(si/no)")) 
        #El empleado pone si hay más clientes y seguir con la loop, o si ya no hay, para acabarla con la cantidad de clientes que hubo
        if continuacion == "si":
            x = x + 1
        else: print("No hay más clientes")
    print("El día de hoy hubieron ", clientes, " clientes, ", descuentos, " descuentos aplicados y se recaudó un total de ", total, " pesos") 
    #Imprime los totales de lo que se ganó, los clientes que hubo y la cantidad de descuentos aplicados en total
else:
    print("El día de hoy no hubieron clientes") #Para cuando no hay clientes desde un principio