#include<stdio.h>
#include<conio.h>

int cnt(char *str)
{
    int i = 0;

    while(*str != '\0')
    {
        if(*str == 32 )
        {
            i++;
        }
        *str++;
    }

    return i;
}

int main()
{
    char ch[20];

    printf("\n Enter Any String =>");
    scanf("%[^\n]s",ch);

    printf("\n Count Of White Spaces Is %d",cnt(ch));

    getch();
    return 0;
}
