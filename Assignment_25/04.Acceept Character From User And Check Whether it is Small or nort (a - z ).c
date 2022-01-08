#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int bool;

bool CheckSmall(char ch)
{
    if(ch >= 97 && ch <= 122)
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

    if(CheckSmall(ch))
    {
        printf("\n It Is A Small Case Character");
    }
    else
    {
        printf("\n It Is A Not Small Case Character");
    }

    getch();
    return 0;
}
