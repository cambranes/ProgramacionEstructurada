--[[
  Autor: Carlos Chan Gongora 15/02/2019
  Entradas: Cualquier numero hasta que se ingrese 999.
  Salidas: La media aritmetica de los numeros ingresados.
  Procedimiento general: Lee y suma los numeros que el usuario ingrese, a la vez
  que cuenta el total de numeros ingresados, al ingresar 999 deja de leer y
  calcula la media aritmetica.
]]--
--[[ Funciones ]]--
-- Lee los numeros hasta que se ingrese 999
function leerNumeros()
  num = 0
  contador = 0
  media = 0
  suma = 0

  while num ~= 999 do
    io.write("Ingresa un numero: ")
    num = io.read("*n")
    if num ~= 999 then
      suma = suma + num
      contador = contador + 1
    end
  end
  if contador > 0 then
    media = suma / contador
    io.write("La media es: "..media)
  else
    io.write("No ingreso ningun numero")
  end
end

--[[ Main ]]--
leerNumeros()

--[[AUTOR QA : RONSSON RAMIRO MAY SANTOS
ENTRADAS:4,5,6,7,8,9,999
SALIDAS: 6.500000;
OBSERVACIONES: EL PROGRAMA CALCULA LA MEDIA ARICMETICA DE N NUMEROS CORRECTAMENTE]]
