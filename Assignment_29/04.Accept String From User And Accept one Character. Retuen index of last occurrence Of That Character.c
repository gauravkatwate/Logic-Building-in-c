#include<conio.h>
#include<stdio.h>

int index(char str[], char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    while(0 <= i)
    {
        if(str[i] == ch)
        {
            return i;
        }
        i--;
    }
}

int main()
{
    char str[20];
    char ch = '\0';

    printf("\n Enter Any String =>");
    gets(str);

    printf("\n Enter Charactor To get index of civen charactor =>");
    scanf("%c",&ch);

    printf("\n Index Of Last Occurance Of Given Charactor Is => %d",index(str,ch));

    getch();
    return 0;
}
