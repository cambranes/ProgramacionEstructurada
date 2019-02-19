--[[
Autor: Guillermo Canto 2/3/2019
Entradas: 2 fechas representadas por cantidades enteras con el formato dd/mm/aaaa
Salidas: La fecha mayor, o si ambas son iguales
Procedimiento general: Compara los años, meses y dias para determinar si son iguales, de no serlo 
determina la fecha mayor.
]]
--Inputs
repeat 
  day1 = io.read("*n")
until day1 > 0 and day1 <= 31
repeat
  month1 = io.read("*n")
until month1 > 0 and month1 <= 12
repeat
  year1 = io.read("*n")
until year1 >= 0
repeat 
  day2 = io.read("*n")
until day2 > 0 and day2 <= 31
repeat
  month2 = io.read("*n")
until month2 > 0 and month2 <= 12
repeat
  year2 = io.read("*n")
until year2 >= 0
--Process
if year1 ~= year2 then
  if year1 > year2 then
    io.write("La fecha mayor es " .. day1 .. "/" .. month1 .. "/" .. year1 )
  else
    io.write("La fecha mayor es " .. day2 .. "/" .. month2 .. "/" .. year2 )
  end
elseif month1 ~= month2 then
  if month1 > month2 then
    io.write("La fecha mayor es " .. day1 .. "/" .. month1 .. "/" .. year1 )
  else
    io.write("La fecha mayor es " .. day2 .. "/" .. month2 .. "/" .. year2 )
  end
elseif day1 ~= day2 then
  if day1 > day2 then
  io.write("La fecha mayor es " .. day1 .. "/" .. month1 .. "/" .. year1 )
  else
    io.write("La fecha mayor es " .. day2 .. "/" .. month2 .. "/" .. year2 )
  end
else 
  io.write("Las fechas son iguales")
end

-- Outputs

-- QA: Jorge Chí

-- Entradas usadas: 10/05/2000 y si mismo, 10/06/2000 y 10/05/2000, 10/05/2000 y 10/06/2000, 21/07/23456 y 01/02/12, 00/00/00 y 01/00/01.

-- Salidas: Las fechas son iguales, 10/06/2000 es mayor, 10/06/2000 es mayor, 21/07/23456 es mayor, 01/00/01 es mayor.
-- Muestra correctamente si una fecha es mayor a otra.
