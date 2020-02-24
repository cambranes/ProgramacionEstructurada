"""
Author Joshua Immanuel Meza Magana
Version 1.0
Program who count how many positive and negative numbers are on N numbers, 0 break the count.
"""

#Functions
def specifyNumbers():
    """
    It gets the N numbers that we will count.
        Args:
            _N (int): Value of the number of numbers
        Returns:
            The N numbers that will be counted
    """
    _N=0

    _N=int(input())

    if _N<0:
        while _N<0:
            _N=int(input())
    
    return _N

def inputNumbers(_N):
    """
    Get a vector of the numbers that we will compare.
        Args:
            _N (int): Number of numbers
            _listNumbers (list): The temporary list of numbers
            num (int): Variable where the user input the numbers
            con (int): Counter
        Returns:
            Values of the list of numbers
    """
    _listNumbers=[]
    num=0
    con=0

    while con<_N:
        num=int(input())
        con=con+1

        if num==0:
            con=_N
        else:
            _listNumbers.append(num)
    
    return _listNumbers

def pResult(_N,_listNumbers):
    """
    It calculates the amount of positive numbers.
        Args:
            _N (int): Number of numbers
            _listNumbers (list): List of numbers
            _pos (int): Ammount of positive numbers
        Returns:
            Ammount of positive numbers
    """
    _pos=0
    
    for x in _listNumbers:
        if x>0:
            _pos=_pos+1
    
    return _pos

def nResult(_N,_listNumbers):
    """
    It calculates the amount of negative numbers.
        Args:
            _N (int): Number of numbers
            _listNumbers (list): List of numbers
            _neg (int): Ammount of negative numbers
        Returns:
            Ammount of negative numbers
    """
    _neg=0

    for x in _listNumbers:
        if x<0:
            _neg=_neg+1
    
    return _neg


def printResults(_pos,_neg):
    """
    It print the amount of positive and negative numbers
        Args:
            _pos (int): Copy of the value of the positive numbers
            _neg (int): Copy of the value of the negative numbers
        Returns:
            Nothing
    """
    print(_pos)
    print(_neg)

def main():
    #Input
    """
    It recives the N amount of numbers, and then it reads them.
        Args:
            N (int): Number of numbers
            listNumbers (list): List of numbers
    """
    N=0
    listNumbers=[]
    N=specifyNumbers()
    listNumbers.extend(inputNumbers(N))

    #Process
    """
    Calculate how many positive and negative numbers are on the N numbers.
        Args:
            pos (int): Ammount of positive numbers
            neg (int): Amount of negative numbers
            N (int): Number of numbers
            listNumbers (list): List of numbers
    """
    pos=pResult(N,listNumbers)
    neg=nResult(N,listNumbers)

    #Output
    """
    Print the results.
    """
    printResults(pos,neg)

if __name__=="__main__":
    main()
