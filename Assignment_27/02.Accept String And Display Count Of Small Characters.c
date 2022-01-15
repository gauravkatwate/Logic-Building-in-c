#include<stdio.h>
#include<conio.h>

int GetCount(char *str)
{
    int j = 0;

    while(*str != '\0')
    {
        if(*str >= 97 && *str <= 122)
        {
            j++;
        }
        *str++;
    }

    return j;
}

int main()
{
    char str[20];

    printf("\n Enter Any String =>");
    scanf("%[^\n]",str);

    printf("\n Count Of Small Letters Is %d",GetCount(str));

    getch();
    return 0;
}
