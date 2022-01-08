#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int bool;

bool CheckCapital(char ch)
{
    if(ch >= 65 && ch <= 90)
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

    printf("\n Enter Any Character =>");
    scanf("%c",&ch);

    if(CheckCapital(ch))
    {
        printf("\n It Is Capital");
    }
    else
    {
        printf("\n It Is Not Capital");
    }

    getch();
    return 0;
}
