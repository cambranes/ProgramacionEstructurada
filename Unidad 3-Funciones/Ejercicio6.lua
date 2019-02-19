x = io.read("*n")

function addingSum()
  if x > 1000 then
    x = x * 1.05
  end
  if x > 3000 then
    x = x * 1.1
  end
  if x > 5000 then
    x = x * 1.05
  end
end
addingSum()
print(x)
--[[
QA: Hector Abraham V. Cosgalla
Entradas: 1050, 3050, 5050
Salidas:37655.8875, 36564.4125, 60686677.0125
Comentarios: Falto la documentacion!
]]