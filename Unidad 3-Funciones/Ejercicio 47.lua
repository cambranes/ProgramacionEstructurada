--[[Autor: Guillermo Canto Dzul
Entradas: Nombre, Edad, Salario por hora, Horas trabajadas a la semana, Porcentaje de impuestos.
Salidas: Sueldo Neto
]]--
--Funciones
function getName()
  io.write("Ingrese su nombre:")
  name= io.read("*n")
  return name
end  
function getAge()
  io.write("Ingrese su edad:")
  age = io.read("*n")
  return age
end
function getSalary()
  io.write("Ingrese su salario por hora:")
  salary = io.read("*n")
  return salary
end
function getHours()
  io.write("Ingrese horas trabajadas:")
  hours = io.read("*n")
  return hours
end
function getTax()
  io.write("Porcentaje de impuestos:")
  tax = io.read("*n")
  return tax
end
function proceso(salary, hours, tax)
  if hours > 40 then
    horas_extra = hours - 40
    horas_tot = ((salary)*(hours))+((salary)*(horas_extra))
  else
    horas_tot = ((salary)*(hours))
  end
  impuestos_tot = ((tax)*(horas_tot)/(100))
	sueldoNeto = ((horas_tot) - (impuestos_tot))
  return sueldoNeto
end
function salida(sueldoNeto)
  io.write("SUELDO NETO: .. sueldoNeto ..")
end

--Entradas

name = getName()
age = getAge()
salary = getSalary()
hours = getHours()
tax = getTax()

-- Proceso

sueldoNeto = proceso(salary, hours, tax)

-- Salida

salida(sueldoNeto)
