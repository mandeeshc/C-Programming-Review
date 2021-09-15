// Sum of first n natural no.

#include<stdio.h>

int main()
{
    /* code */
    int num,res=0;
    printf("Enter value of n in sum of n natural no.\n");
    scanf("%d",&num);
    // Runs in linear time
    // for (int i = 1; i <= num; i++)
    // {
    //     /* code */
    //     res+=i;
    // }
    // Runs in constant time 
    res = ((num*num)+num)/2;
    printf("Sum of first %d natural no. is : %d ",num,res);
    return 0;
}
