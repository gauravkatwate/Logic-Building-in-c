#include<stdio.h>
#include<conio.h>

void printDigit(int no)
{
    int digit = 0;

    if(no < 0)
    {
        no = -no;
    }
    while(no != 0)
    {
    digit = no % 10;
    printf("\n %d",digit);
    no = no / 10;
    }
}

int main()
{
    int ino = 0;
    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    printDigit(ino);

    getch();
    return 0;
}
