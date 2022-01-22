#include<stdio.h>
#include<conio.h>

void Smlstrcpy(char *str, char *str2)
{
    while(*str != '\0')
    {
        if(*str >= 97 && *str <= 122)
        {
            *str2 = *str;
            *str2++;
        }
        *str++;
    }
}

int main()
{
    char str[20];
    char str2[20];

    printf("\n Enter Any String =>");
    gets(str);

    Smlstrcpy(str,str2);

    printf("\n Orignal String => %s",str);
    printf("\n Copy Small Letters Of String => %s",str2);

    getch();
    return 0;
}
