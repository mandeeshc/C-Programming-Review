// WAP a menu driven program to convert km to miles, inch to foot, cm to inch, pound to kg, inch to mtrs
#include<stdio.h>
int input;
float km,miles,feet,inch; // Divide other variables as needed
int menu()
{
    printf("Please choose your conversion.\n");
    printf("Press 1 for Kms to Miles.\n");
    printf("Press 2 for Inch to Foot.\n");
    printf("Press 3 for Cms to Inch.\n");
    printf("Press 4 for Inch to meters.\n");
    printf("Press 0 to exit the program.\n");
    scanf("%d",&input);
    return input;
}

void conversion(int op)
{
    switch (op)
    {
    case 1:

        printf("Enter value in kms. :");
        scanf("%f",&km);
        miles = 0.62137*km;
        printf("%0.2f kms = %f miles\n\n",km,miles);
        break;
    
    case 2:
        
        printf("Enter value in inch. :");
        scanf("%f",&inch);
        feet = inch/12;
        printf("%0.2f inch = %f feet\n\n",inch,feet);
        /* code */
        break;
        
    case 3:
        /* code */
        break;
        
    case 4:
        /* code */
        break;
    
    default: printf("Wrong option selected!\n");
        break;
    }
}

int main()
{
    /* code */
    float num;
    while(1)
    {
        int option = menu();
        if(option == 0)
        {
            printf("Exiting the program!\n");
            break;
        }
        conversion(option);
    }

    return 0;
}
