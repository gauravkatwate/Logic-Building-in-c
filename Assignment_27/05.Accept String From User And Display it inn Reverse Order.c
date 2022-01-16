#include<stdio.h>
#include<conio.h>

void Display(char *str)
{
    int i = 0,j = 0,m = 0;
    char rstr[12];

    while(str[i] != '\0')
    {
        i++;
    }

    i = i - 1;
    printf("\n Reverse String Is =>");

    while(i >= 0)
    {
        printf("%c",str[i]);
        i--;
    }
}

int main()
{
    char ch[20];

    printf("\n Enter Any String =>");
    scanf("%[^\n]",ch);

    Display(ch);

    getch();
    return 0;
}
