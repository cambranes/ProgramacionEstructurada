--[[
Autor: Guillermo Canto 2/3/2019
Entradas: 2 fechas representadas por cantidades enteras con el formato dd/mm/aaaa
Salidas: La fecha mayor, o si ambas son iguales
Procedimiento general: Compara los años, meses y dias para determinar si son iguales, de no serlo 
determina la fecha mayor.
]]
--Inputs
day1 = io.read("*n")
month1 = io.read("*n")
year1 = io.read("*n")
day2 = io.read("*n")
month2 = io.read("*n")
year2 = io.read("*n")
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