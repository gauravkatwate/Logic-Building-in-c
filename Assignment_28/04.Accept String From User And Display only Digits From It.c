#include<stdio.h>
#include<conio.h>

void Display(char *str)
{
    printf("\n Given String Included Numbers Is =>");
    while(*str != '\0')
    {
        if(*str >= 48 && *str <= 57)
        {
            printf("%c",*str);
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

    getch();
    return 0;
}
