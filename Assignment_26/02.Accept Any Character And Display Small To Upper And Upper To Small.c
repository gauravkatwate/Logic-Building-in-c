#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        ch = ch + 32;
    }
    else if(ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
    }
    printf(" %c ",ch);
}

int main()
{
    char ch = '\0';

    printf("\n Enter Any Charactor =>");
    scanf("%c",&ch);

    Display(ch);

    getch();
    return 0;
}


