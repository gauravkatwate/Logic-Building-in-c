#include<stdio.h>
#include<conio.h>

int freq(char *str,char ch)
{
    int i = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            i++;
        }
        *str++;
    }

    return i;
}

int main()
{
    char str[20];
    char ch = '\0';

    printf("\n Enter Any String =>");
    gets(str);

    printf("\n Enter Any Charactor To Get Frequency =>");
    scanf("%c",&ch);

    printf("\n Frequency Of Given Character Is => %d",freq(str,ch));

    getch();
    return 0;
}

