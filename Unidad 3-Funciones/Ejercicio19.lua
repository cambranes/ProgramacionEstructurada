--[[
  Autor: Carlos Chan Gongora 15/02/2019
  Entradas: Tres numeros.
  Salidas: El mayor de los 3 numeros.
  Procedimiento general: Lee los 3 numeros, posterior verifica si son iguales y encuentra
  el mayor de los 3 numeros, si los numeros no son iguales imprime el mayor, de ser iguales
  imprime un texto indicando que los numeros son iguales.
]]--
--[[ Funciones ]]--
-- lee un numero
function entrada()
  numero = 0
  io.write("Ingresa un numero: ")
  numero = io.read("*n")
  return numero
end
-- Verfica si los numeros son iguales, de serlo regresa true o si no false.
function verificarIgualdad(num1, num2, num3)
  igualdad = false
  if(num1 == num2 and num2 == num3) then
    igualdad = true
  end
  return igualdad
end
-- Compara 3 numeros para encontrar el mayor
function encontrarMayor(num1, num2, num3)
  mayor = 0;
  if(num1 > num2 and num1 > num3) then
    mayor = num1;
  elseif(num2 > num1 and num2 > num3) then
    mayor = num2;
  else
    mayor = num3;
  end
  return mayor;
end
-- Verifica si los numeros son iguales, en ese caso imprime que "son iguales",
-- de lo contrario imprime al mayor
function imprimirResultados(igualdad, mayor)
  if igualdad then
    io.write("Los numeros son iguales")
  else
    io.write("El mayor es: "..mayor)
  end
end

--[[ Main ]]--
-- Entradas
num1 = entrada();
num2 = entrada();
num3 = entrada();

-- Procesos
igualdad = verificarIgualdad(num1, num2, num3);
if not igualdad then
  mayor = encontrarMayor(num1, num2, num3);
end

-- Salidas
imprimirResultados(igualdad, mayor);
