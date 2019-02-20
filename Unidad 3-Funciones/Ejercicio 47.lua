--[[Autor: Guillermo Canto Dzul
Entradas: Nombre, Edad, Salario por hora, Horas trabajadas a la semana, Porcentaje de impuestos.
Salidas: Sueldo Neto
]]--
--Funciones
function getName()
  io.write("Ingrese su nombre:")
  name= io.read("*n")
end 

function getAge()
  io.write("Ingrese su edad:")
  age = io.read("*n")
end

function getSalary()
  io.write("Ingrese su salario por hora:")
  salary = io.read("*n")
end

function getHours()
  io.write("Ingrese horas trabajadas:")
  hours = io.read("*n")
end

function getTax()
  io.write("Porcentaje de impuestos:")
  tax = io.read("*n")
end

function proceso()
  if hours > 40 then
    horas_extra = hours - 40
    horas_tot = ((salary)*(hours))+((salary)*(horas_extra))
  else
    horas_tot = ((salary)*(hours))
  end
  impuestos_tot = ((tax)*(horas_tot)/(100))
  resultado = ((horas_tot) - (impuestos_tot))
  return resultado
end

function salida()
  io.write("SUELDO NETO: .. sueldoNeto ..")
end

--Entradas

getName()
getAge()
getSalary()
getHours()
getTax()

-- Proceso

sueldoNeto = proceso()

-- Salida

salida()

--[[
QA: Realizó: Jose Mendez
Entradas: jose, 26, 100 , 45 , 10
Salidas: None
Tiene problemas al momento de pedir el nombre, ya que solo acepta numeros.
ademas al momento de imprimir variables, no funciona io.write
]]
