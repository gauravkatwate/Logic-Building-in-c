#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int bool;

bool CheckChar(char ch)
{
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
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

    if(CheckChar(ch))
    {
        printf("\n It Is Charactor");
    }
    else
    {
        printf("\n It Is Not a Charactor");
    }

    getch();
    return 0;
}
