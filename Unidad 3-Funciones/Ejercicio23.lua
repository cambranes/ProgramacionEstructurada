
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
