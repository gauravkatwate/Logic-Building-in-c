#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    printf("\n Given Character \n Octal Value => 0%o \n Decimal Value => %d \n Hexadecimal Value => 0X%x",ch,ch,ch);
}

int main()
{
    char ch = '\0';

    printf("\n Enter Any Character =>");
    scanf("%c",&ch);

    Display(ch);

    getch();
    return 0;
}
