"""
Autor: Jonathan Gómez
Program that receives a positive number to which a percentage is added depending on its size.
Version 1.0
"""
#Functions
def readNumber ():
    """
       Read the number which is going to use to calculate the percentage the program will add
       Args: 
           _Number (int): Value of the user
       Returns:
           The read _Number entered by the user
    """
    _Number=int(input())
    
    return _Number

def calculatepercentage (_Number):
    """
      With if sentences the program determines how much percentage is going to add to the variable
      That percentage depends of how big is the number (1000=5%, 3000=10%, 5000=%5)
      The program would be add all the if sentences
      Args:
          _Number: Value entered
          _newNumber: New number after increase percentage
      Returns:
          _newNumber: Final output     
    """
    _newNumber= _Number
    
    if _Number>1000:
        _newNumber+= _Number*0.05
    elif (_Number>3000):
        _newNumber+= _Number*0.1
    elif (_Number>5000):
        _newNumber+= _Number*0.05
        
    return _newNumber

def printNewNumber(_newNumber):
    """
    Using the _newNumber the program print the output
    Args:
        _newNumber: Value after increase percentage
    """
    print(int(_newNumber))

def main():
#Input
 """
 A integer Number and variable declarations     
 Args:
     Number (int): The number wich is going to use to calculate the new value
     newNumber (int): The new value of the Number 
 """
 Number=0
 newNumber=0
 Number=readNumber()

 #Process
 """
 With the help of another adding variable, its value is modified based on the number entered by the user
 Args:
     newNumber: The new value after increase percentage
 """
 newNumber= calculatepercentage(Number)

 #Output
 """
 The new value of newNumber, that is the result of the process
 Args:
      newNumber: Print the final output
 """
 printNewNumber(newNumber)

if __name__ == "__main__":
   main()