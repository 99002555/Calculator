#include <calculator_operations.h>
int isprime(int operand1);
int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int squares(int operand1)
{
    return (operand1 * operand1);
}

int cubes(int operand1)
{
    return (operand1 * operand1 * operand1);
}

int power(int operand1, int operand2)
{
    int i,result=1,t;
     for(i=1;i<=operand2;i++)
 {
  t=operand1;
  result=result*t;
 }
    return result;
}

int max(int operand 1,int operand 2)
{
    if(operand1> operand2)
    {
        return operand1;
    }
    else
    {
        return operand2;
    }
}

int factorial(int operand1)
{
    int items,fact=1;
    if (operand1 < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (items = 1; items <= operand1; ++items) {
            fact *= i;
        }
        return fact;
    }
    
 int prime(int operand1)
{
  int result = isprime(operand1);
  return result;
}

int isprime(int operand1)
{
	int i;
   for(i=2;i<operand1;i++)
  /* checks prime number */
  if(operand1%i== 0)
    break;
  /* Return 1 for prime number */
  if(i>operand1/2)
  return -1;
  else
  return 1;
}   
   
 float average(float operand1, float operand2)
 {
     return (operand1+operand2)/2;
 }
    
  int swap(int operand1, int operand2)
  {
      int operand3;
      operand3=operand1;
      operand1=operand2;
      operand2=operand3;
  }
