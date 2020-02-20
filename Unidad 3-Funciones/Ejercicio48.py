'''
Author Joshua Immanuel Meza Magana
Version 1.0
Program who add a little amount of money to the salary of a worker depending on the time he has worked on the company.
'''

#Functions
def readAge():
    '''
    It reads the age of the worker.
        Args:
            _age (int): Value of the age of the worker 
        Returns:
            The age of the worker
    '''
    _age=0

    _age=int(input())

    if _age<0 or _age>15 or _age==0:
        while _age<0 or _age>15 or _age==0:
            _age=int(input())
    
    return _age

def readMoney():
    '''
    It reads the salary of the worker.
        Args:
            _money (float): Salary of the worker 
        Returns:
            The salary of the worker
    '''
    _money=0
    
    _money=float(input())

    if _money<0:
        while _money<0:
            _money=float(input())

    return _money

def calculateExtra(_age,_money):
    '''
    It calculates the total new amount of money.
        Args:
            _age (int): Age of the worker
            _money (float): Normal amount of money
            _total (float): New total amount of money
        Returns:
            The new total amount of money
    '''
    _total=float(0)

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
    '''
    It prints the total of money.
        Args:
            _total (float): Total of money
        Returns:
            Nothing
    '''
    print(_total)

#Input
'''
It receives the values.
    Args:
        age (int): Age of the worker
        money (float): Salary of the worker
        total (float): New total amount of money
'''
age=0
money=0
total=0
age=int(readAge())
money=float(readMoney())

#Process
'''
It calculates the new total.
    Args:
        age (int): Age of the worker
        money (float): Salary of the worker
        total (float): New total amount of money
'''
total=float(calculateExtra(age,money))

#Output
'''
It prints the result.
    Args:
        total (float): New total amount of money
'''
printResult(total)
