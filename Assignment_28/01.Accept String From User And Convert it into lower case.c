#include<stdio.h>
#include<conio.h>

void Display(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 90)
        {
            *str = *str + 32;
        }
        else
        {
            *str = *str;
        }
        *str++;
    }
}

int main()
{
    char ch[20];

    printf("\n Enter Any String =>");
    scanf("%[^\n]s",ch);

    Display(ch);

    printf("\nModifided String Is => %s",ch);

    getch();
    return 0;
}
