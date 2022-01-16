#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int bool;

bool Check(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'a' || *str == 'E' || *str == 'e' || *str == 'I' || *str == 'i' || *str == 'O' || *str == 'o' || *str == 'U' || *str == 'u' ||*str == 'A' ||*str == 'A' )
        {
            return True;
        }
        str++;
    }
    return 0;
}

int main()
{
    char ch[20];

    printf("\n Enter Any String =>");
    scanf("%[^\n]",ch);

    if(Check(ch))
    {
        printf("\n Containe Vowels");
    }
    else
    {
        printf("\n Not Containe Vowels");
    }

    getch();
    return 0;
}
