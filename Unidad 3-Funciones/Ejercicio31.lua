--[[
Autor: Guillermo Canto Dzul
Entradas: Un numero entero
Salidas: Imprime si es primo o no.
]]

--Funciones
function entrada()
  n = io.read("*n")
end

function proceso()
  suma = 0
  for i=1, n, 1
    if n%i == 0 then
      suma = suma + 1
    end
  end
  if suma == 1 then
    flag = 1
  else
    flag = 0
  end
  return flag
end

function salida()
  if esPrimo == 1 then
    io.write("El numero es primo")
  else
    io.write("No es un numero primo")
  end
end

--Main

entrada()
esPrimo = proceso()
salida ()

  
