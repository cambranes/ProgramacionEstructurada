
#Declaración de variables
num = 100 #Inicio del número donde empieza la cuenta de 3 digitos, para comparar al final
numTemp = 0 #Aquí se almacena temporalmente el número para ir guardando los digitos
aDig = 0 #Aquí se guarda el primer digito
bDig = 0 #Aquí se guarda el segundo digito
cDig = 0 #Aquí se guarda el tercer digito
total = 0 #Aquí se guarda el total de elevar a la potencia 3 los digitos del número


#Condicional para comprobar cada uno desde el 100 al 999
#Salida: Los números que cumplan que sus digitos elevados a la tercera potencia sean igual a ese mismo número
while num < 1000:
    numTemp = num
    cDig = numTemp%10
    numTemp = (numTemp-numTemp%10)/10
    bDig = numTemp%10
    numTemp = (numTemp-numTemp%10)/10
    aDig = numTemp
    total = aDig**3 + bDig**3 + cDig**3
    if total == num:
        print(str(num) + " ")
    num=num+1
