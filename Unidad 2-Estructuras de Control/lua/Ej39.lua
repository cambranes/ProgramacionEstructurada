--[[
Autor: Guillermo Canto	Fecha: 2/3/2019
Entradas:	Ninguna.
Salidas:	La suma de los numeros impares del 1 al 10.
Procedimiento general:
Determina si un numero es impar o no, de serlo lo agrega al acumulador sum e
imprime sum al final.
]]

sum=0
for i=0,10,1
do
  if (i%2 ~=0)
    sum = sum +1
  end
end
--Output
io.write("La suma de los impares del 1 al 10 es: " .. sum)

-- Outputs

-- QA: Jorge Chí

-- Entradas usadas: Ninguna

-- Salidas: 5

-- El programa suma cuantos número impares hay en vez de los número en sí. Recomiendo cambiar el 1 en la suma por i.
