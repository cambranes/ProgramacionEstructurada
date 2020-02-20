//Author: Aldebaran Lira
//Program that finds the corresponding ASCII-code
//Version 1.0

#include <stdio.h>

//Function prototypes
void readLetter(char *);
int findASCIIcode(int);
void printCode(int);

int main(){

  // Declaration of variables
  char letter;
  int ASCIIc;

  //Input: A letter of the alphabet
  readLetter(&letter);

  //Process: Find the ASCII-code
  ASCIIc=(letter);

  //Output: The ASCII-code
  printCode(ASCIIc);

  return 0;
}

void readLetter(char *_letter){
  scanf("%c",_letter); getchar();
}

int findASCIIcode(int _ASCIIc){
  return _ASCIIc;
}

void printCode(int _output){    
  printf("%d\n\n",_output);
}
