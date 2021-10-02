#include<stdio.h>
#define MAX_SIZE 10

int main()
{
    int arr[MAX_SIZE], num, revarr[MAX_SIZE];

    // Enter the size of array
    printf("Enter the size of array needed\n");
    scanf("%d",&num);
    printf("Size of array is:%d\n",num);
    
    // Enter the elements in array
    printf("Enter the elements of the array\n");
    for (int i = 0; i < num; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    
    // Print the array
    printf("Array Elements : ");
    for (int i = 0; i < num; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    printf("\n"); 
    
    int j=0;
   
    // Logic to reverse the array   
    for(int i=num-1; i>=0; i--)
    {
        revarr[j] = arr[i]; //0
        j++;
    }

    printf("Reversed Array Elements : ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",revarr[i]);
    }
    printf("\n"); 
  
    return 0;
}