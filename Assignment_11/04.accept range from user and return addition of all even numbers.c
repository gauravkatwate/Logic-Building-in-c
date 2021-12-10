#include<stdio.h>
#include<conio.h>

int RangEvenSum(int sp,int ep)
{
    int sum = 0;

    up:
    if(sp <= ep)
    {
        if(sp % 2 == 0)
        {
            sum = sum + sp;
        }
        sp++;
        goto up;
    }

    return sum;
}
int main()
{
    int SP = 0, EP = 0;

    printf("\n Enter First Number =>");
    scanf("%d",&SP);

    printf("\n Enter Second Number =>");
    scanf("%d",&EP);

    printf("\n Sum Is => %d",RangEvenSum(SP,EP));

    getch();
    return 0;
}
