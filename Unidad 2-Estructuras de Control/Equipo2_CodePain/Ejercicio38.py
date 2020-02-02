num=100
numTemp=0
aDig=0
bDig=0
cDig=0
total=0

while num<1000:
    numTemp=num
    cDig=numTemp%10
    numTemp=(numTemp-numTemp%10)/10
    bDig=numTemp%10
    numTemp=(numTemp-numTemp%10)/10
    aDig=numTemp
    total=aDig**3+bDig**3+cDig**3
    if total==num:
        print(str(num)+ " ")
    num=num+1
