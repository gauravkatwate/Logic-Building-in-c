#include<stdio.h>
#include<conio.h>

int index(char str[],char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return i;
        }
        i++;
    }
}

int main()
{
    char str[20];
    char ch = '\0';

    printf("\n Enter Any String =>");
    gets(str);

    printf("\n Enter Any Character to Get Index =>");
    scanf("%c",&ch);

    printf("\n Index Of Given Character Is => %d",index(str,ch));

    getch();
    return 0;
}
