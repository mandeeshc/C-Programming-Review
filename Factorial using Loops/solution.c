// Factorial of a number using loops
#include<stdio.h>
unsigned int fact=1;
   
int factorial(int num)
{
    
    if(num==1 || num==0)
    {
        fact = 1;
    }

    else
    {
        while(num)
        {
            fact = num * fact;
            num--;
        }
    }   
    return fact;
}
int main()
{
    int num;
    printf("Enter the no. whose factorial is to be calculated : ");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,factorial(num));
    return 0;
}
