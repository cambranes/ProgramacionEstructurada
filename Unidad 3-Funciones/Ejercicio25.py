'''
Author: Aldebaran Lira
Version 0.0
Find the ASCII-code
'''

#Functions

#Int
def readLetter():
    '''
    It reads a letter from the alphabet
        Args:
            _letter (str): Value of the variable
        Returns: 
            A letter of the alphabet
    '''
    _letter = str(input())
    
    return _letter

#Process
def findASCIIcode(_letter):
    '''
    It searches for the corresponding code
        Args:
            _letter (str): A letter of the alphabet
            _code (int): ASCII-code
        Returns:
            The correspondinf code
    '''
    _code=ord(_letter)
    
    return _code

#Output
def printResult(_code):
    '''
    It prints the corresponding code
        Args:
            _code (int):The corresponding code
        Returns:
            Nothing
    '''
    print(_code)
    
    
#Input
code=0
letter=0
letter=readLetter()

#Process
code=findASCIIcode(letter)

#Output
printResult(code)
