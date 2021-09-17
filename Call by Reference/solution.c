#include<stdio.h>
void call_by_reference(int *x,int *y)
{
    int temp = *x;
    *x = *x + *y;
    *y = temp - *y;
}
int main()
{
    int a=4,b=3;
    printf("Value of a is %d and b is %d\n",a,b);
    call_by_reference(&a,&b);
    printf("Value of a is %d and b is %d\n",a,b);
    return 0;
}