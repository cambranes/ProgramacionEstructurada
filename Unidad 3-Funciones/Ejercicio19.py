#Determinate
numMayor = 0
num1 = 0
num2 = 0 
num3 = 0 

def comparisons(num1, num2, num3):
    if num1 > num2 and num1 > num3:
        numMayor = num1
    elif num2 > num1 and num2 > num3:
        numMayor = num2
    else:
        numMayor = num3
    return ("El numero mayor es:", numMayor)

num1 = float(input())
num2 = float(input())
num3 = float(input())
print(comparisons(num1, num2, num3))