// Program to print fibonacci series upto n;
// Loops Method
#include <stdio.h>
// void fibo_recursive(int n)
// {
//      if(n==1||n==2)
//      {
//      }
//      else
//      {

//      }
// }

void fibo_loops(int loopv)
{
    unsigned int a = 0, b = 1,c;
    printf("%d,%d",a,b);  // if complete series is needed
    for(int i=0;i<(loopv-2);i++)
    {
        c = a+b;        a = b;        b = c;
        printf(",%d",c); // if complete series is needed
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;       
    printf("Enter the length of series: ");
    scanf("%d",&n);
    printf("Fibonacci series upto %d numbers is : ",n);
    fibo_loops(n);
    return 0;
}
