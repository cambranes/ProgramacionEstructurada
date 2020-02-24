"""
Autor: Jonathan Gómez
Version 1.0
Program that determines if an integer N number is even or odd
"""

#Functions
def readNumber():
    """
    Read the number which want to know is even or odd and returns the value to the original variable Number
    Args:
        _Number: Read the number which the user wants to know if is even or odd
    Returns:
        _Number: The value entered
    """
    _Number= int(input())
        
    return _Number

def calculateTypeNumber(_Number):
  """
  Using the module function we compare the result with 0, that means _Number is even or odd
  #The _typeNumber is even when the module give us 0 and odd when is >0, in the moment when the _Number
  #is a even number the value of the flag change and if is not == 0 then the flag still being the same
  #This function returns the value of _typeNumber because we are going to use it for the output
  Args:
      typeNumber: Flag who determinates the type of _Number
      _Number: The value entered by the user
  Returns:
      _typeNumber: The type of number, even or odd
  """
  _typeNumber=0
  if _Number%2==0 :
     _typeNumber=1
  
  return _typeNumber

def printTypeNumber(_typeNumber):
   """
   Using the value of _typeNumber we have the output of our program
   Args:
       _typeNumber: The final output with the type of number
   """
   print(_typeNumber)

def main():
 #Input
 """
 Number (int): A integer Number
 typeNumber (int): Type number, even or odd
 """
 Number=0
 typeNumber=0
 Number=(readNumber())

 #Process
 """
 Determines if the module of 2 of Number is 0, which means that is an even number
 Then the value of typeNumber change to 1, which for this program represents even and 0 represents odd
 """
 typeNumber= calculateTypeNumber(Number)

 #Output
 """
 1 for even Number or 0 for odd Number
 """
 printTypeNumber(typeNumber)
 
if __name__== "__main__":
   main()