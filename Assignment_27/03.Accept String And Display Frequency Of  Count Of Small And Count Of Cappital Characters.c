#include<stdio.h>
#include<conio.h>

int Display(char *str)
{
    int i = 0, j = 0;

    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 90)
        {
           i++;
        }
        else if(*str >= 97 && *str <= 122)
        {
            j++;
        }

        str++;
    }

    return i - j;
}

int main()
{
    char ch[20];

    printf("\n Enter Any String =>");
    scanf("%[^\n]",ch);

    printf("\n Frequency Of Cappital Letters And Small Letters Is => %d",-(Display(ch)));

    getch();
    return 0;
}
