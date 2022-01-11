#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int bool;

bool Check(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
         return False;
    }
    else if(ch >= 97 && ch <= 122)
    {
         return False;
    }
    else if(ch >= 49 && ch <= 57)
    {
         return False;
    }
    else
    {
         return True;
    }
}

int main()
{
    char ch = '\0';

    printf("\n Enter Any Charactor =>");
    scanf("%c",&ch);

    if(Check(ch))
    {
        printf("\n Given Character Is Special Symbole.");
    }
    else
    {
        printf("\n It Is Not Special Symbole");
    }

    getch();
    return 0;
}
