# Escribir un programa que lea 2 números y los imprima de mayor a menor.

# Entrada
def getNumber():
  num = int(input());
  return num;

# Proceso
def getResult(num1, num2):
  if (num1 > num2):
    return 1;
  else:
    return 0;

# Salida
def getOutput(flag):
  if(flag == 1):
    print(str(num1) + ' ' + str(num2));
  else:
    print(str(num2) + ' ' + str(num1));

num1 = getNumber();
num2 = getNumber();
flag = getResult(num1, num2);
getOutput(flag);