#Autor: Jonathan Gómez
#Program that receives a positive number to which a percentage is added depending on its size.
#Version 1.0

#Functions
def readNumber ():
    #Read the number which is going to use to calculate the percentage the program will add
    #Returns the _Number 
    
    _Number=int(input())
    
    return _Number

def calculatepercentage (_Number):
    #With if sentences the program determines how much percentage is going to add to the variable
    #That percentage depends of how big is the number (1000=5%, 3000=10%, 5000=%5)
    #The program would be add all the if sentences
    
    _newNumber= _Number
    
    if _Number>1000:
        _newNumber+= _Number*0.05
    elif (_Number>3000):
        _newNumber+= _Number*0.1
    elif (_Number>5000):
        _newNumber+= _Number*0.05
        
    return _newNumber

def printNewNumber(_newNumber):
    #Using the _newNumber the program print the output
    
     print(int(_newNumber))

#Input:A integer Number and variable declarations     
Number=0
newNumber=0
Number=readNumber()

#Process:With the help of another adding variable, its value is modified based on the number entered by the user
newNumber= calculatepercentage(Number)

#Output:The new value of newNumber, that is the result of the process
printNewNumber(newNumber)