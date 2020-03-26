#Ejercicio 46 
#Autor: Jorge Limón
#Entrada: Verificación de si hay clientes o no (1/0), y los montos de los clientes (monto) para que así se calculen los descuentos y totales
#Salida: La cantidad de clientes (clientes), descuentos (descuentos) y el total (total) recaudado

#Definir funciones
def montoRevisado():
    descuentos = 0
    monto = int(input("Monto, porfavor")) 
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
    return monto

#Variables
n = 0
clientes = 0
total = 0
descuentos = 0
#Proceso:
#Pide cuántos clientes hay
n = int(input("Clientes")) 
if n == 0:
    print(n)
else:
    #En la función se le muestran al cliente lo que le corresponde pagar, con descuento aplicado, si aplica.
    while clientes < n:
       total = total + montoRevisado()
       clientes = clientes + 1
    #Imprime cantidad de clientes del día y el total
    print(clientes, total)