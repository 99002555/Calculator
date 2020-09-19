#include <operation.h>
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

int hcf(int operand1,int operand2)
{
	int i, gcd;


    for(i=1; i <= operand1 && i <= operand2; ++i)
    {
        // Checks if i is factor of both integers
        if(operand1%i==0 && operand2%i==0)
            gcd = i;
    }

    return gcd;
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

int lcm(int operand1,int operand2)
{
	int operand1, operand2, i, gcd, lcm;
    for (i = 1; i <= operand1 && i <= operand2; ++i) {
        
        // check if i is a factor of both integers
        if (operand1 % i == 0 && operand2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;
	return lcm;
}

int leftshift(int operand1,int operand2)
{
	return operand1<<operand2;
}

int rightshift(int operand1,int operand2)
{
	return operand1>>operand2;
}

int swap(int operand1, int operand2)
  {
      int temp;
      temp=operand1;
      operand1=operand2;
      operand2=temp;
  }


int squares(int operand2)
{
    return (operand2 * operand2);
}

int cubes(int operand2)
{
    return (operand2 * operand2 * operand2);
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
    


   
 float average(float operand1, float operand2)
 {
     return (operand1+operand2)/2;
 }
    
  
