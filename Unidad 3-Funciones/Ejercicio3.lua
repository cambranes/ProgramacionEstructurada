--[[
  Autor: Carlos Chan Gongora 15/02/2019
  Entradas: Un numero entero.
  Salidas: El dia de la semana correspondiente al numero ingresado.
  Procedimiento general: Lee un numero, valida que este en el rango de 1 a 7 e Imprime
  el dia correspondiente.
]]--

--[[ Funciones ]]--
-- lee un numero
function entrada()
  numero = 0
  io.write("Ingresa un numero entre 1 y 7: ")
  numero = io.read("*n")
  return numero
end

-- Valida que el numero este entre 1 y 7
function validarNumero(num)
  validar = false
  if(num >= 1 and num <= 7) then
    validar = true
  else
    validar = false
  end
  return validar
end

-- Recibe un entero e imprime el dia correspondiente
function imprimirDia(num)
  if n == 1 then
	   io.write("\nLunes")
  elseif n == 2 then
	   io.write("\nMartes")
  elseif n == 3 then
	   io.write("\nMiercoles")
  elseif n == 4 then
	   io.write("\nJueves")
  elseif n == 5 then
	   io.write("\nViernes")
  elseif n == 6 then
	   io.write("\nSabado")
  elseif n == 7 then
	   io.write("\nDomingo")
  else
	   io.write("\nError")
  end
end

--[[ Main ]]--
-- Entradas
n = 1
repeat
  io.write("Ingresa un numero entre 1 y 7: ")
  n = io.read("*n")
until validarNumero(n)

-- Salida
imprimirDia(n)
--[[
QA: Hector Abraham V. Cosgalla
Entradas: 5, 2
Salidas: viernes, martes (respectivamente)
Funciona correctamente solo que por algun motivo cuando lo 
ejecutaba primero leia el numero y luego aparecia lo demas.
]]