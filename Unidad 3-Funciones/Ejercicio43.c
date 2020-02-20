/*
Author Joshua Immanuel Meza Magana
Version 1.0
Program who count how many positive and negative numbers are on N numbers, 0 break the count.
*/

#include <stdio.h>

void specifyNumbers(int *);
void inputNumbers(int,float[]);
int pResult(int,float[]);
int nResult(int,float[]);
void printResult(int,int);

int main() {

  /* Input
  It recives the N amount of numbers, and then it reads them.
    Args:
        nNum (int): Number of numbers
        listNumbers (vector): List of numbers
  */
  int nNum=0;
  specifyNumbers(&nNum);
  float listNumbers[nNum];
  inputNumbers(nNum,listNumbers);

  /*Process 
  Calculate how many positive and negative numbers are on the N numbers.
    Args:
        pos (int): Ammount of positive numbers
        neg (int): Amount of negative numbers
        N (int): Number of numbers
        listNumbers (list): List of numbers
  */
  int pos=0,neg=0;
  pos=pResult(nNum,listNumbers);
  neg=nResult(nNum,listNumbers);

  /*Output 
  Print the results.
  */
  printResult(pos,neg);

  return 0;
}

/* Functions */

void specifyNumbers(int *_nNum){
    /*
    It gets the N numbers that we will count.
        Args:
            _nNum (int): Value of the number of numbers
        Returns:
            The N numbers that will be counted
    */
    scanf("%d",_nNum);

    if (*_nNum<0 || *_nNum==0){
        while (*_nNum<0 || *_nNum==0){
            scanf("%d",_nNum);
        }
    }
}

void inputNumbers(int _nNum,float _listNumbers[]){
    /*
    Get a vector of the numbers that we will compare.
        Args:
            _nNum (int): Number of numbers
            _listNumbers (vector): The temporary list of numbers
            con (int): Counter
        Returns:
            Values of the list of numbers
    */
    int con=0;

    while (con<_nNum){
        scanf("%f",&_listNumbers[con]);
        if (_listNumbers[con]==0){
            con=_nNum;
        }
        con+=1;
    }
}

int pResult(int _nNum,float _listNumbers[]){
    /*
    It calculates the amount of positive numbers.
        Args:
            _nNum (int): Number of numbers
            _listNumbers (vector): List of numbers
            _pos (int): Ammount of positive numbers
        Returns:
            Ammount of positive numbers
    */
    int _pos=0,i=0;

    while (i<_nNum){
        if (_listNumbers[i]==0){
            break;
        } else if (_listNumbers[i]>0){
            _pos+=1;
        }
        i+=1;
    }

    return _pos;
}

int nResult(int _nNum,float _listNumbers[]){
    /*
    It calculates the amount of negative numbers.
        Args:
            _nNum (int): Number of numbers
            _listNumbers (vector): List of numbers
            _neg (int): Ammount of negative numbers
        Returns:
            Ammount of negative numbers
    */
    int _neg=0,i=0;

    while (i<_nNum){
        if (_listNumbers[i]==0){
            break;
        } else if (_listNumbers[i]<0){
            _neg+=1;
        }
        i+=1;
    }

    return _neg;
}

void printResult(int _pos,int _neg){
    /*
    It print the amount of positive and negative numbers
        Args:
            _pos (int): Copy of the value of the positive numbers
            _neg (int): Copy of the value of the negative numbers
        Returns:
            Nothing
    */
    printf("%d %d",_pos,_neg);
}
