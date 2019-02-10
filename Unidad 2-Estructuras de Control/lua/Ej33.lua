--[[
Autor: Guillermo Canto Fecha:2/3/2019
Entradas: 
n - numero de tablas de multiplicar a imprimir
j - multiplo con el cual empiezan las tablas
k - multiplo con el cual terminan las tablas
Salidas:
"Las primeras n tablas de multiplicar que incluyan desde el valor j hasta 
el valor k"
Procedimiento general: 
Calcula e imprime las primeras n tablas de multiplicar delimitadas por 
las variables j y k
]]
--Inputs
n = io.read("*n")
j = io.read("*n")
k = io.read("*n")
--Process
c=0
for i=1, n, 1
do
  while (j <= k) 
  do
    io.write( i .. " x " .. j .. " = " .. i*j .. "\n")
    j=j+1
    c=c+1
  end
  j=j-c;
  c=0;
  io.write("\n")
end