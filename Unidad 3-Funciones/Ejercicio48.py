#Autor Joshua Immanuel Meza Magana
#Version 1.0
#Program who add a little amount of money to the salary of a worker depending on the time he has worked on the company.

#Functions
def readAge():
    _age=0

    _age=int(input())

    if _age<0 or _age>15:
        while _age<0 or _age>15:
            _age=int(input())
    
    return _age

def readMoney():
    _money=0
    
    _money=int(input())

    if _money<0:
        while _money<0:
            _money=int(input())

    return _money

def calculateExtra(_age,_money):
    _total=0

    if _age>=1 and _age<=3:
        _total=_money*1.01
    else:
        if _age>=4 and _age<=6:
            _total=_money*1.03
        else:
            if _age>=7 and _age<=9:
                _total=_money*1.05
            else:
                _total=_money*1.07

    return _total

def printResult(_total):
    print(_total)

#Input
age=0
money=0
total=0
age=int(readAge())
money=int(readMoney())

#Process
total=int(calculateExtra(age,money))

#Output
printResult(total)
