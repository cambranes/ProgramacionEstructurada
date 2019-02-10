# Autor:Jose Eduardo Mendez Verdejo 04/Febrero/19
# Entradas:num. de clientes, y el total a pagar de cada uno
# Salidas: total de cada cliente (algunos con descuento), total en caja y total de descuentos
# Procedimiento general: se aplicara un descuento al total de cada cliente dependiento de la cantidad a pagar

#Entradas --------------------------------------

#se solcita el numero de clientes a cobrar
num_clientes = int(input("Numero de clientes a cobrar: "))
pagarC = [None] * num_clientes
descuentoC = [None] * num_clientes
pagarDC = [None] * num_clientes

total_Caja = 0
total_Descuentos = 0
i = 0
print('\n')
while i < num_clientes :
	#se pide el monto a pagar de cada cliente
	pagarC[i] = int(input("cantidad a pagar del cliente num. {}: ".format(i+1)))

#Procedimiento ---------------------------------

	#se toma el total a pagra de cada cliente  y se verifica si le corresponde algun descuento
	if pagarC[i] >= 500 and pagarC[i]< 1000:
		descuentoC[i] = pagarC[i] * 0.05 
		pagarDC[i]=pagarC[i]*0.95

	elif pagarC[i] >= 1000 and pagarC[i]< 7000:
		descuentoC[i]=pagarC[i]*0.11
		pagarDC[i]=pagarC[i]*0.89

	elif pagarC[i] >= 7000 and pagarC[i]< 15000:
		descuentoC[i]=pagarC[i]*0.18
		pagarDC[i]=pagarC[i]*0.82

	elif pagarC[i] >= 15000:	
		descuentoC[i]=pagarC[i]*0.25;
		pagarDC[i]=pagarC[i]*0.75;

	else:
		descuentoC[i]=0;
		pagarDC[i]=pagarC[i];

	#se suma el monto toal a pagar y el decuento de cada cliente a sumadores
	total_Caja = total_Caja + pagarDC[i]
	total_Descuentos = total_Descuentos + descuentoC[i]
	i+=1

#Salidas ---------------------------------------

i = 0
print('\n\n')
while i < num_clientes:
	if pagarC[i]<500 :
		print("cliente {}: No alcanzo descuento   Total a pagar {:0.2f} \n".format(i+1,pagarDC[i]))
	else:
		print("Cliente {}: Monto inicial {:0.2f}   Descuento {:0.2f}   Total a pagar {:0.2f} \n".format(i+1,pagarC[i],descuentoC[i],pagarDC[i]))	
	i+=1


print('\n\n')
print("Total en caja: {:0.2f}".format(total_Caja))
print("Total de descuentos aplicados: {:0.2f}".format(total_Descuentos))

#QA
#Realizo: Guillermo Canto
#Entradas: -1, 0 , 2,1000,500
#Salidas: Ok, Ok, Ok
#El programa funciona correctamente
