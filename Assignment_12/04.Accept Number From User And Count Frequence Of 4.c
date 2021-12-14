#include<stdio.h>
#include<conio.h>

int Count(int no)
{
    int digit = 0, i = 0;

    while(no != 0)
    {
        digit = no % 10;
        if(digit == 4)
        {
            i++;
        }
        no = no /10;
    }
    return i;
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    printf("\n Count Of 4 Is => %d",Count(ino));

    getch();
    return 0;
}
