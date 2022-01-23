#include<stdio.h>
#include<conio.h>

void convert(char *str,char *str2)
{
    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 90)
        {
            *str = *str + 32;
        }
        else if(*str >= 97 && *str <= 122)
        {
            *str = *str - 32;
        }
        *str2 = *str;
        str2++;
        str++;
    }
    *str2 = '\0';
}
int main()
{
    char str[20];
    char str2[20];

    printf("\n Enter Any String =>");
    gets(str);

    convert(str,str2);

    printf("\n Toggler Case => %s",str2);

    getch();
    return 0;
}
