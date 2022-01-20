#include<stdio.h>
#include<conio.h>

void Rev(char *str, char *str2)
{
    int i = 0, j = 0,k = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    i = i - 1;

    for(j = 0; i >= 0; j++,i--)
    {
        str2[j] = str[i];
    }
}

int main()
{
    char str[20];
    char str2[20];

    printf("\n Enter Any String To Get Reverse=>");
    scanf("%[^\n]s",str);

    Rev(str,str2);

    printf("\n Reverse String Is %s",str2);

    getch();
    return 0;
}
