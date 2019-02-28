
x = io.read("*n")
result = 0

function factorial(n)
  answer = 1;
  for i = 1, n, 1 do
    answer = answer * i;
  end
  return answer;
end

function formula()
  precision = 18;
  for i = 0, precision - 1, 1 do
    result = result + (x^i / factorial(i));
  end
end


formula()
print(result)

--[[Autor QA: Ronsson RAMIRO MAY SANTOS
ENTRADAS: 5,8,10
SALIDAS : THE OUTCOME IS :148.413;
          THE OUTCOME IS :2980.954493
          THE OUTCOME IS :22025.43166
OBSERVACIONES:EL PROGRAMA SI DETERMINA ex = 1 + x + x2/2! + x3/3! + … + xn/n! ]]
