# Escribir un programa que reciba tres números enteros que representan dos catétos y una hipotenusa y que determine si cumple con la ecuación de pitágoras.

# Variables Globales
c1 = int(input())
c2 = int(input())
h = int(input())
resultado = 0

# Comprobación 
def proceso(a,b,c):
  if((a*a)+(b*b) == c*c):
    return 1;
  else:
    return 0;

# MAIN #
resultado = proceso(c1,c2,h)
print(resultado);
