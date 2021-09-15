#include<stdio.h>

int main()
{
    int num;
    printf("Enter any no. ");
    scanf("%d",&num);
    //printf("You entered %d",num);
    // Without using loops
    printf("Multiplication Table of %d\n",num);
    for (int i = 1; i <= 10; i++)
    {
        /* code */
       printf("%dx%d=%d\n",num,i,num*i); 
    }
    
    // printf("%dx1=%d\n",num,num*1);
    // printf("%dx2=%d\n",num,num*2);
    // printf("%dx3=%d\n",num,num*3);
    // printf("%dx4=%d\n",num,num*4);
    // printf("%dx5=%d\n",num,num*5);
    // printf("%dx6=%d\n",num,num*6);
    // printf("%dx7=%d\n",num,num*7);
    // printf("%dx8=%d\n",num,num*8);
    // printf("%dx9=%d\n",num,num*9);
    // printf("%dx10=%d\n",num,num*10);
    //printf("Multiplication Table of %d",num);
    //printf("Multiplication Table of %d",num);
    
    return 0;
}
