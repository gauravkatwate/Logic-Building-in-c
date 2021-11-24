#include<stdio.h>
#include<conio.h>

int SchoolFees(int Standard)
{
    if(Standard == 1)
    {
       return 8900;
    }
    else if(Standard == 2)
    {
        return 12790;
    }
    else if(Standard == 3)
    {
        return 21000;
    }
    else
    {
        return 23450;
    }
}
int main()
{
    int Std = 0, Fees = 0;

    printf("\n Enter Standard Of Student => ");
    scanf("%d",&Std);

    if(Std >= 1 && Std <= 4)
    {
    Fees = SchoolFees(Std);
    }
    else
    {
        printf("\n Plese Enter Valid Standard. ");
        return 0;
    }

    printf("\n %d Standard Fees Is %d.",Std,Fees);
    getch();
    return 0;
}
