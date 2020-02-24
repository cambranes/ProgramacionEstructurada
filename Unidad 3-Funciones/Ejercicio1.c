//Autor: Jonathan Gómez
// Program that determines if an integer N number is even or odd
//Version 1.0
#include <stdio.h>

int readNumber(int);
int calculateTypeNumber(int, int);
void printTypeNumber(int);

int main(){
    int Number=0, typeNumber=0;
    //Input: A integer Number 
    Number= readNumber(Number);

    //Process: Determines if the module of 2 of Number is 0, which means that is an even number
    //Then the value of typeNumber change to 1, which for this program represents even and 0 represents odd
    typeNumber= calculateTypeNumber(Number,typeNumber);

    //Output: 1 for even Number or 0 for odd Number
    printTypeNumber(typeNumber);

}

int readNumber (int Number){
    //Read the number which want to know is even or odd and returns the value to the original variable Number

    scanf("%d", &Number);

    return Number;
}

int calculateTypeNumber (int Number, int typeNumber){
   //Using the module function we compare the result with 0, that means _Number is even or odd
  //The _typeNumber is even when the module give us 0 and odd when is >0, in the moment when the _Number
  //is a even number the value of the flag change and if is not == 0 then the flag still being the same
  //This function returns the value of _typeNumber because we are going to use it for the output

    typeNumber=0;
    if (Number%2 == 0){
        typeNumber=1;
    }
    return typeNumber;
}

void printTypeNumber(int typeNumber){
    //Using the value of _typeNumber we have the output of our program
   
    printf("%d", typeNumber);
}