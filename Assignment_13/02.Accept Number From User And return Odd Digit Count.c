#include<stdio.h>
#include<conio.h>

int OddCount(int no)
{
    int i = 0, digit = 0;

    while(no != 0)
    {
        digit = no % 10;
        if(digit % 2 != 0)
        {
            i++;
        }
        no = no / 10;
    }
    return i;
}
int main()
{
    int ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    printf("\n Odd Digit Count Is %d",OddCount(ino));

    getch();
    return 0;
}
