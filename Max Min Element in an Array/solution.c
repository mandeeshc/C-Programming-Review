// Find the largest & 2nd largest array element, and min array element in a given array
#include<stdio.h>
int main()
{
    int arr[] = {2,453,895,4,642,896,23,1,234};
    int max = 0, max2 = 0, min;
    for(int i=0;i<9;i++)
    {
        if(max<arr[i])
        {
            max2 = max;
            max = arr[i];
        }
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    printf("Largest element is : %d\n",max);
    printf("2nd Largest element is : %d\n",max2);
    printf("Min element is : %d\n",min);

    return 0;
}