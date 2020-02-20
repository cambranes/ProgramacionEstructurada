//Autor: Jonathan Gómez
//Program that receives a positive number to which a percentage is added depending on its size.
//Version 1.0

#include <stdio.h>

//Function prototypes
int readNumber(int);
int calculatepercentage(int, int);
void printNewNumber(int);

int main (){
  //Declaration of variables
  int Number=0;
  int newNumber=0;

  //Input:A integer Number and variable declarations 
   Number= readNumber(Number);

  //Process:With the help of another adding variable, its value is modified based on the number entered by the user
   newNumber= calculatepercentage(newNumber, Number);

  //Output:The new value of newNumber, that is the result of the process
  printNewNumber(newNumber);

 }

 int readNumber(int Number){
 //Read the number which is going to use to calculate the percentage the program will add
 //Returns the Number value

  scanf("%d",&Number);

  return Number;

 }

 int calculatepercentage( int newNumber, int Number) {
   //With if sentences the program determines how much percentage is going to add to the variable
   //That percentage depends of how big is the number (1000=5%, 3000=10%, 5000=%5)
   //The program would be add all the if sentences

   newNumber = Number;
   if (Number>1000) {
     newNumber+= Number*0.05;
   } else {
     if (Number>3000){
       newNumber+= Number*0.1;
     } else {
       if (Number>5000){
         newNumber+=Number*0.05;
       }
     }
   }

   return newNumber;

  }

 void printNewNumber(int newNumber){
   //Using the newNumber the program print the output

   printf("%d", newNumber);

  } 