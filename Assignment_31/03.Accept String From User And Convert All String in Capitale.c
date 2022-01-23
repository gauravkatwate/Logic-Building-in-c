#include<stdio.h>
#include<conio.h>

void Convert(char *str ,char *str2)
{
    while(*str != '\0')
    {
        if(*str >= 97 && *str <= 122)
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

    Convert(str,str2);

    printf("Capital String Is => %s",str2);

    getch();
    return 0;
}
