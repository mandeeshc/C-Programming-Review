#include<stdio.h>
int factorial(int num)
{
    if(num==1 || num==0)
    {
        return 1;
    }    
    else
    {
        return (num*factorial(num-1));
    }
}
int main()
{
    int num;
    printf("Enter the no. whose factorial is to be calculated : ");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,factorial(num));
    /* code */
    return 0;
}
