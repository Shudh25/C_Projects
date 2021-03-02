#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int Desicision(char you,char comp);
int main()      //Snake Water Gun game.
{
    char you,comp;                 //*
    srand(time(0));               //* For random number.
    int number = rand()%100 + 1; //*

    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp='w';
    }
    else{
        comp='g';
    }
    printf("Enter your choice 's' or 'w' or 'g' : ");
    scanf("%c",&you);
    int result = Desicision(you,comp);
    if(result == 0)
    {
        printf("Draw!!\n");
    }
    else if(result == 1)
    {
        printf("You Win!!\n");
    }
    else
    {
        printf("You Lose!!\n");
    }
    printf("\nYou selected %c and computer selected %c",you,comp);
    return 0;
}
int Desicision(char you,char comp)
{
    //Checks for Draw.
    if(you==comp)
    {
        return 0;
    }
    //Checks for Win or Lose
    if(you=='s' && comp=='w')
    {
        return 1;
    }
    else if(you=='w' && comp=='s')
    {
        return -1;
    }
    if(you=='w' && comp=='g')
    {
        return 1;
    }
    else if(you=='g' && comp=='w')
    {
        return -1;
    }
    if(you=='s' && comp=='g')
    {
        return -1;
    }
    else if(you=='g' && comp=='s')
    {
        return 1;
    }
}
