--[[
  Autor: Carlos Chan Gongora 16/02/2019
  Entradas: ID, Edad y sueldo de 10 personas.
  Salidas: El numero de personas con mas de 35 años  entre 5000 y 7500.
  Procedimiento general: Lee los datos y luego compara si el sueldo esta en
  el rango de 5000 y 7500 para aumentar el valor de un contador.
]]--
--[[ Funciones ]]--
-- Lee el id, edad y sueldo
function leerDatos(id)
  for i = 1, 10, 1 do
    io.write("Persona: "..i.."\n")
    io.write("ID: ")
    id[i] = io.read("*n")
    io.write("Edad: ")
    edad[i] = io.read("*n")
    io.write("Sueldo: ")
    sueldo[i] = io.read("*n")
    io.write("\n")
  end
end
-- Recorre el array de sueldo y cuenta los que esten entre 5000 y 7500
function contarMayores(edad, sueldo)
  contador = 0;
  for i = 1, 10, 1 do
    if edad[i] > 35 then
      if(sueldo[i] >= 5000 and sueldo[i] <= 7500) then
        contador = contador + 1;
      end
    end
  end
  return contador;
end
-- Imprime los resultados
function imprimirResultados(num)
  io.write("La cantidad de personas mayores a 35 anios con sueldo entre 5000 - 7500 es: "..num)
end

--[[ Main ]]--
-- Entrada
id = {}
edad = {}
sueldo = {}
mayores35 = 0

leerDatos(id, edad, suelo)

-- Proceso
mayores35 = contarMayores(edad, sueldo)

-- Salidas
imprimirResultados(mayores35)

--[[
  Autor: Carlos Chan Gongora 16/02/2019
  Entradas: ID, Edad y sueldo de 10 personas.
  Salidas: El numero de personas con mas de 35 años  entre 5000 y 7500.
  Procedimiento general: Lee los datos y luego compara si el sueldo esta en
  el rango de 5000 y 7500 para aumentar el valor de un contador.
]]--
--[[ Funciones ]]--
-- Lee el id, edad y sueldo
function leerDatos(id)
  for i = 1, 2, 1 do
    io.write("Persona: "..i.."\n")
    io.write("ID: ")
    id[i] = io.read("*n")
    io.write("Edad: ")
    edad[i] = io.read("*n")
    io.write("Sueldo: ")
    sueldo[i] = io.read("*n")
    io.write("\n")
  end
end
-- Recorre el array de sueldo y cuenta los que esten entre 5000 y 7500
function contarMayores(edad, sueldo)
  contador = 0;
  for i = 1, 2, 1 do
    if edad[i] > 35 then
      if(sueldo[i] >= 5000 and sueldo[i] <= 7500) then
        contador = contador + 1;
      end
    end
  end
  return contador;
end
-- Imprime los resultados
function imprimirResultados(num)
  print("La cantidad de personas mayores a 35 anios con sueldo entre 5000 - 7500 es: "..num)
end

--[[ Main ]]--
-- Entrada
id = {}
edad = {}
sueldo = {}
mayores35 = 0

leerDatos(id, edad, suelo)

-- Proceso
mayores35 = contarMayores(edad, sueldo)

-- Salidas
imprimirResultados(mayores35)

--[[
QA: Realizó: Jose Mendez
Entradas: (id,35,5000)(id,64,6500)(id, 65,7500)
Salidas: 3 personas mayores. 
Funciona Correctamente.
]]
