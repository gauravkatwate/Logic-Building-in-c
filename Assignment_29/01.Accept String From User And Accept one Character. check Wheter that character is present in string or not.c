#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int bool;

bool Check(char *str,char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return True;
        }
        *str++;
    }
    return False;
}

int main()
{
    char str[30];
    char ch;


    printf("\n Enter Any String =>");
    gets(str);

    printf("\n Enter Any Character To Search In String =>");
    scanf("%c",&ch);

    if(Check(str,ch))
    {
        printf("\n Given Character Present In Given String");
    }
    else
    {
        printf("\n Given Character Not Present In Given String");
    }

    getch();
    return 0;
}
