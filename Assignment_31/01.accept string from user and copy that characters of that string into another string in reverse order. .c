#include<stdio.h>
#include<conio.h>

void strCpyRev(char *str, char *str2)
{
    int i = 0,j = 0;

    while(*str != '\0')
    {
        str++;
        i++;
    }

    str--;

    while(i >= 0)
    {
       *str2 = *str;
        str--;
        str2++;
        i--;
    }
}

int main()
{
    char str[20];
    char str2[20];

    printf("\n Enter Any String =>");
    gets(str);

    strCpyRev(str,str2);

    printf("\n Reverse String Is => %s",str2);

    getch();
    return 0;
}
