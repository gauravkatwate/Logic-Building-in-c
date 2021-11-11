#include<stdio.h>
#include<conio.h>

int Check(int no)
{
    if(no % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int ino = 0, ck = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    ck = Check(ino);

    if(ck == 1)
    {
        printf("\n Given Number Is Even");
    }
    else
    {
        printf("\n Given Number Is Odd");
    }

    getch();
    return 0;
}
