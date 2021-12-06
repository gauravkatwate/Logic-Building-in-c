#include<stdio.h>
#include<conio.h>

int DollerToINR(int no)
{
    return 70 * no;
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number Of USD =>");
    scanf("%d",&ino);

    printf("Value Of INR is %d",DollerToINR(ino));

    getch();
    return 0;
}
