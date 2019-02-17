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
