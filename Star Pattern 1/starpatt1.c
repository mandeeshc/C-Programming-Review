// WAP to Print Star Pattern
// *
// **
// ***
// ****

#include<stdio.h>

void star_pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverse_star_pattern(int n)
{
    int temp = n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the rows you wish to see: ");
    scanf("%d",&n);
    star_pattern(n);
    printf("Reverse Star Pattern\n");
    reverse_star_pattern(n);   
    return 0;
}