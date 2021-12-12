#include<stdio.h>
#include<conio.h>

void Display(int sp, int ep)
{
    up:
    if(ep >= sp)
    {
        printf(" %d ",ep);
        ep--;
        goto up;
    }
}
int main()
{
    int SP = 0,EP = 0;

    printf("\n Enter First Number =>");
    scanf("%d",&SP);

    printf("\n Enter Second Number =>");
    scanf("%d",&EP);

    Display(SP,EP);

    getch();
    return 0;
}
