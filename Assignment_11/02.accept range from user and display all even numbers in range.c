#include<stdio.h>
#include<conio.h>

void Display(int SP, int EP)
{
    up:
    if(SP <= EP)
    {
        if(SP % 2 == 0)
        {
        printf(" %d ",SP);
        }
        SP++;
        goto up;
    }
}

int main()
{
    int SP = 0, EP = 0;

    printf("\n Enter First Number =>");
    scanf("%d",&SP);

    printf("\n Enter Second Number =>");
    scanf("%d",&EP);

    Display(SP,EP);

    getch();
    return 0;
}
