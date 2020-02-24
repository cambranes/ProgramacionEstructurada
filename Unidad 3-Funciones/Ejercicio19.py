'''
Author Irving Eduardo Poot Moo
Version 1.0
Program who translate a military hour to a normal hour
'''

def inputNum1():
    '''
    It gets the first number that we will compare
        Args:
            num1 (float): First given number
        Retuns:
            The fisrt number
    '''
    num1 = float(input())
    return num1

def inputNum2():
    '''
    It gets the second number that we will compare
        Args:
            num2 (float): Second given number
        Retuns:
            The second number
    '''
    num2 = float(input())
    return num2

def inputNum3():
    '''
    It gets the third number that we will compare
        Args:
            num3 (float): Third given number
        Retuns:
            The third number
    '''
    num3 = float(input())
    return num3


def comparisons(num1, num2, num3):
    '''
    Compare all the numbers to get the biggest number
        Args:
            num1 (float): First given number
            num2 (float): Second given number
            num3 (float): Third given number
            numMayor (float): The biggest number
        Retuns:
            The biggest number
    '''
    if num1 > num2 and num1 > num3:
        numMayor = num1
    elif num2 > num1 and num2 > num3:
        numMayor = num2
    else:
        numMayor = num3
    return (numMayor)

def outputMayor(nunMayor):
    '''
    Print the biggest number
        Args:
            numMayor (float): Second given number
        Retuns:
            Nothing
    '''
    print("El numero mayor es: ", numMayor)

#Inputs
'''
It recives the number to compare
        Args:
            num1 (float): First given number
            num2 (float): Second given number
            num3 (float): Third given number
'''
num1 = inputNum1()
num2 = inputNum2()
num3 = inputNum3()

#Process
'''
Compares the tree given number to get the biggest
    Args:
        num1 (float): First given number
        num2 (float): Second given number
        num3 (float): Third given number
        numMayor (float): The Biggest number
'''
numMayor = comparisons(num1, num2, num3)

#Output
'''
Print the bigggest number
'''
outputMayor(numMayor)