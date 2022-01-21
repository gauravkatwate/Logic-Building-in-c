#include<stdio.h>
#include<conio.h>

void Cstrcpy(char *str,char *str2)
{
    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 90)
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
    char ch = '\0';

    printf("\n Enter Any String =>");
    gets(str);

    Cstrcpy(str,str2);

    printf("\n Orignal String => %s",str);
    printf("\n Copy Capital String => %s ",str2);

    getch();
    return 0;
}
