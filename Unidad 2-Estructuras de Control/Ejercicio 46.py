#Ejercicio 46 - 
#Autor: Jorge Limón
#Entrada: Verificación de si hay clientes o no (1/0), y los montos de los clientes (monto) para que así se calculen los descuentos y totales
#Salida: La cantidad de clientes (clientes), descuentos (descuentos) y el total (total) recaudado
descuentos = 0
total = 0
clientes = 0
x = 1 
#X para que haya algo para comparar a n al inicio y se pueda seguir o acabar el loop dependiendo de si hay m'as clientes o no
n = 0
proseguir = int(input()) 
#Se pone 1 si sí hay, y 0 si no hay, para que imprima que de plano no hay clientes
if proseguir == 1:
    while n < x:
        monto = int(input()) 
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
        print(monto)
        #Se imprime el monto que deba pagar el cliente
        total = total + monto
        n = n + 1
        clientes = clientes + 1
        continuacion = int(input()) 
        #El empleado pone si hay más clientes con 1 y seguir con la loop, o si ya no hay con 0, para acabarla con la cantidad de clientes que hubo
        if continuacion == 1:
            x = x + 1
    print(clientes, descuentos, total) 
    #Imprime la cantidad de clientes en el día, la cantidad de descuentos que se aplicaron y el total recaudado
else:
    print(proseguir) #Para cuando no hay clientes desde un principio (0)
