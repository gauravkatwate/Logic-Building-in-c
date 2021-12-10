#include<stdio.h>
#include<conio.h>

int Sum;

int Display(int SP, int EP)
{
    if(SP <= EP)
    {
        Sum = Sum + SP;
        SP++;
        Display(SP,EP);
    }
    return Sum;
}

int main()
{
    int SP = 0, EP = 0;

    printf("\n Enter First Number =>");
    scanf("%d",&SP);

    printf("\n Enter Second Number =>");
    scanf("%d",&EP);

    printf("\n Sum Is => %d",Display(SP,EP));
    getch();
    return 0;
}
