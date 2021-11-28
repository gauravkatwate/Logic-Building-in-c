#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[40];

    printf("\n Enter Full Name => ");
    scanf("%40[^\n]",&Name);

    getch();

    printf("\n Your Name Is %s ",Name);

    getch();
    return 0;
}
