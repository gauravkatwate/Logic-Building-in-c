#include<stdio.h>
#include<conio.h>

void strcpy(char *str,char *str2)
{
    while(*str != '\0')
    {
        *str2 = *str;
        *str++;
        *str2++;
    }
}
int main()
{
    char str[20];
    char str2[20];

    printf("\n Enter Eny String =>");
    gets(str);

    strcpy(str,str2);

    printf("\n old String => %s",str);
    printf("\n New String => %s",str2);

    getch();
    return 0;
}
