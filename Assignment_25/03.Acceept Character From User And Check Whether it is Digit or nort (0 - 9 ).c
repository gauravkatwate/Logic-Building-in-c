#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int bool;

bool CheckDigit(char ch)
{
    if(ch >= 48 && ch <= 57)
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    char ch = '\0';

    printf("\n Enter Any Charactor =>");
    scanf("%c",&ch);

    if(CheckDigit(ch))
    {
        printf("\n It Is Digit");
    }
    else
    {
        printf("\n It Is Not Digit");
    }

    getch();
    return 0;
}
