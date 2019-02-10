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

-- QA: Jorge Chí

-- Entradas usadas: 1 - 1 - 1, 3 - 1 - 1, 5 - 2 - 4

-- Salidas: 1x1 = 1, 1 x 1 = 1  2 x 1 = 2  3 x 1 = 3,
--1 x 2 = 2
--1 x 3 = 3
--1 x 4 = 4

--2 x 2 = 4
--2 x 3 = 6
--2 x 4 = 8

--3 x 2 = 6
--3 x 3 = 9
--3 x 4 = 12

--4 x 2 = 8
--4 x 3 = 12
--4 x 4 = 16

--5 x 2 = 10
--5 x 3 = 15
--5 x 4 = 20
--Imprime correctamente lo solicitado
