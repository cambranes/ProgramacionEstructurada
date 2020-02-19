#Autor Joshua Immanuel Meza Magana
#Version 1.0
#Program who count how many positive and negative numbers are on N numbers, 0 break the count.

#Functions
def specifyNumbers():
    _N=0

    _N=int(input())

    if _N<0:
        while _N<0:
            _N=int(input())
    
    return _N

def inputNumbers(_N):
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
    _pos=0
    
    for x in _listNumbers:
        if x>0:
            _pos=_pos+1
    
    return _pos

def nResult(_N,_listNumbers):
    _neg=0

    for x in _listNumbers:
        if x<0:
            _neg=_neg+1
    
    return _neg


def printResults(_pos,_neg):
    print(_pos)
    print(_neg)

#Input
N=0
listNumbers=[]
N=specifyNumbers()
listNumbers.extend(inputNumbers(N))

#Process
pos=pResult(N,listNumbers)
neg=nResult(N,listNumbers)

#Output
printResults(pos,neg)
