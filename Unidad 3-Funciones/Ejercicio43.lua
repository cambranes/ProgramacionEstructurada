x = 0
positive = 0
negative = 0

function getNumber()
  x = io.read("*n")
  return x
end

function checkSign(num)
  if num > 0 then
    return 0
  elseif num < 0 then
    return 1
  end
end

function process()
  while (getNumber() ~= 0) do
    if (checkSign(x) == 0) then
      positive = positive + 1
    elseif (checkSign(x) == 1) then
      negative = negative + 1
    end
  end
end

process()
print("Hay "..positive.." numeros positivos y "..negative.." numeros negativos")
