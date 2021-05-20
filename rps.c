#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char,char);// function prototype
int main()
{
    char you,comp;
    srand(time(0));
    int num = rand()%100 + 1;
    if(num<33)
    {
        comp='r';
    }
    else if(num>33 && num<66)
    {
        comp='p';
    }
    else
    {
        comp='s';
    }
    printf("Enter 'r' for rock,'p' for paper and 's'for scissor\n");
    scanf("%c",&you);
    int result = game(you,comp);//function calling
    if(result==0)
    {
        printf("It's a draw");
    }
    else if(result==1)
    {
        printf("You won");
    }
    else
    {
        printf("you lose");
    }
    printf("\nYou entered %c and computer entered %c",you,comp);
    return 0;

}
//function defination
int game(char you, char comp)
{
    if(you==comp)
    {
        return 0;
    }
    if(you=='r' && comp=='s')
    {
        return 1;
    }
    else if(you=='s' && comp=='r')
    {
        return -1;
    }
    if(you=='p'&& comp=='s')
    {
        return -1;
    }
    else if(you=='s'&& comp=='p')
    {
        return 1;
    }
    if(you=='p'&& comp=='r')
    {
        return 1;
    }
    else if(you=='r'&& comp=='p')
    {
        return -1;
    }
}