//Program to create a simple game of Rock, Paper, Scissors
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int user_points = 0, pc_points = 0;  

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

void gameLogic(int user,int pc)
{
    // 0 is Rock, 1 is Scissors, 2 is Paper
    if(user == 0)
    {
        if(pc == 0)
        {
            printf("It's a TIE!\n");
        }
        else if(pc == 1)
        {
            printf("You Win!\n");
            user_points++;
        }
        else if(pc == 2)
        {
            printf("PC Win!\n");
        }
        //printf("Rock \n!"); 
    }

    else if(user == 1)
    {
        if(pc == 0)
        {
            printf("You Win!\n");
            user_points++;
        }
        else if(pc == 1)
        {
            printf("It's a TIE!\n");
        }
        else if(pc == 2)
        {
            printf("PC Win!\n");
            pc_points++;
        }
        //printf("Scissors \n!");
    }

    else if(user == 2)
    {
        if(pc == 0)
        {
            printf("You Win!\n");
            user_points++;
        }
        else if(pc == 1)
        {
            printf("PC Win!\n");
            pc_points++;
        }
        else if(pc == 2)
        {
            printf("It's a TIE!\n");
        }
        //printf("Paper \n!");
    }

    else
    {
        printf("Error State !\n");
    }

}

void displayChoice(int input)
{
    switch (input)
    {
        case 0: puts("chose Rock!");
                //gameLogic(input);
            break;

        case 1: puts("chose Scissors!");
                //gameLogic(input);
            break;

        case 2: puts("chose Paper!");
                //gameLogic(input);
            break; 

        default: puts("Invalid Input!");
            break;
    }
}

void checkWinner(char *user_name)
{
    printf("%s scored %d points, PC scored %d points.\n",user_name,user_points,pc_points);
    if(user_points>pc_points)
    {
        printf("You WIN!\n");
    }
    else if(user_points<pc_points)
    {
        printf("PC is a clear winner\n");
    }
    else
    {
        printf("It is a TIE!\n");
    }
}

int main()
{
    char name[50];
    int user_input,computer_input;
    printf("Welcome to Rock, Paper, Scissors Game!\n");
    printf("Kindly Enter your Name to continue ... ");    gets(name);
    printf("Welcome %s !\n",name);      //puts(name); 
    puts("Let us Start the Game.");
    puts("You get a total of 3 tries.");
    for (int i = 0; i <= 2; i++)
    {
        puts("Choose 0 for Rock, 1 for Scissors & 2 for Paper.");
        scanf("%d",&user_input);
        printf("You ");    displayChoice(user_input);
        computer_input = generateRandomNumber(3);
        printf("Computer ");    displayChoice(computer_input);
        gameLogic(user_input,computer_input);    
    }
    checkWinner(name);
    return 0;
}