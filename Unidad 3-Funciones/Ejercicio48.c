/*
Author Joshua Immanuel Meza Magana
Version 1.0
Program who add a little amount of money to the salary of a worker depending on the time he has worked on the company.
*/

#include <stdio.h>

int readAge();
float readMoney();
float calculateExtra(int,float);
void printResult(float);

int main() {
  
  /*Input
  It receives the values.
    Args:
      age (int): Age of the worker
      money (float): Salary of the worker
      total (float): New total amount of money
  */
  int age=0;
  float money=0,total=0;
  age=readAge();
  money=readMoney();

  /*Process
  It calculates the new total.
    Args:
      age (int): Age of the worker
      money (float): Salary of the worker
      total (float): New total amount of money
  */
  total=calculateExtra(age,money);

  /*Output
  It prints the result.
    Args: 
      total (float): New total amount of money
  */
  printResult(total);

  return 0;
}

/* Functions */

int readAge(){
  /*
  It reads the age of the worker.
    Args:
      _age (int): Value of the age of the worker 
    Returns:
      The age of the worker
  */
  int _age=0;

  scanf("%d",&_age);

  if (_age<0 || _age>15 || _age==0){
    while (_age<0 || _age>15 || _age==0){
      scanf("%d",&_age);
    }
  }

  return _age;
}

float readMoney(){
  /*
  It reads the salary of the worker.
    Args:
      _money (float): Salary of the worker 
    Returns:
      The salary of the worker
  */
  float _money=0;

  scanf("%f",&_money);

  if (_money<0){
    while (_money<0){
      scanf("%f",&_money);
    }
  }

  return _money;
}

float calculateExtra(int _age,float _money){
  /*
  It calculates the total new amount of money.
    Args:
      _age (int): Age of the worker
      _money (float): Normal amount of money
      _total (float): New total amount of money
    Returns:
      The new total amount of money
  */
  float _total=0;

  if (_age>=1 && _age<=3){
    _total=_money*1.01;
  } else if (_age>=4 && _age<=6){
    _total=_money*1.03;
  } else if (_age>=7 && _age<=9){
    _total=_money*1.05;
  } else if (_age>=10){
    _total=_money*1.07;
  } 

  return _total;
}

void printResult(float _total){
  /*
  It prints the total of money.
    Args:
      _total (float): Total of money
    Returns:
      Nothing
  */
  printf("%f",_total);
}
