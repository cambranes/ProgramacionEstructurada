#Declaración de variables
prod=0 #Producto de la tabla de multiplicar 
x = 0 #Número que va de 2 al 10 
y = 0


#Inicio de ciclos for para imprimir las tablas de multiplicar solicitadas
#Salida: Las tablas de multiplicar del 2 al 9
for x in range(2,10):
    for y in range(1,11):
        prod = x * y
        print(str(x) + "x" + str(y) + "=" + str(prod)) 
