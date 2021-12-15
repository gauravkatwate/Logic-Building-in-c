#include<conio.h>
#include<stdio.h>

int DigMult(int no)
{
    int digit = 0, mult = 1;

    while(no != 0)
    {
        digit = no % 10;
        if(digit != 0)
        {
        mult = digit * mult;
        }
        no = no / 10;
    }

    return mult;
}
int main()
{
    int ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    printf("\n Given Number Digits Multiplication Is => %d",DigMult(ino));

    getch();
    return 0;
}
