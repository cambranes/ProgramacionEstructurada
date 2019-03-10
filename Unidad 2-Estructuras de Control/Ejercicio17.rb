#Autor: Amilcar Ramirez Patron
#Entradas: Los dos ángulos a evaluar que sean enteros positivos.
#Salidas: Los tipos de ángulo que son resultado de la diferencia entre los dos ángulos
#Procedimiento General:Evalúo los dos ángulos que el usuario pone, de forma que queden en ángulos menores de 360, para posteriormente 
#revisar la diferencia entre los dos valores. Para que de positiva la diferencia, uso una variable que guarde el número evaluando el mayor
#diferencia del menor. Después, la variable la evalúo en su valor respecto a los ángulos de un círulo, de  ahí me imprime el tipo de ángulo
#que se forma (Recto, agudo, llano, etc.)

print("Poner números enteros positivos\n")
gets angl1
gets angl2
anglres = 0


while (angl1 >= 360) do
  angl1 = angl1 - 360
end
while (angl2 >= 360)do
    angl2 = angl2 - 360
end
if (angl1 < angl2) then
      anglres = angl2 - angl1
end
if (angl2 < angl1) then
  anglres = angl1 - angl2
end
print(anglres.to_s + "\n")
if (anglres == 0)then
   print("Los angulos son iguales\n")
end
if (anglres < 90)then
  print("El angulo resultante es agudo\n")
end
if ((anglres > 90) && (anglres < 180))then
  print("El angulo resultante es obtuso\n")
end
if (anglres == 90)then
  print("El angulo resultante es recto\n")
end
if (anglres == 180)then
  print("Él angulo resultante es llano\n")
end
if (anglres > 180)then
  print("El angulo resultante es concavo\n")
end
#QA: Luis Gerardo Leon Ortega
#entradas: Los dos ángulos a evaluar que sean enteros positivos.
#salidas: Los tipos de ángulo que son resultado de la diferencia entre los dos ángulos
