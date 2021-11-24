#include<stdio.h>

float incometax(int Amount)
{
    if(Amount >= 500000 && Amount < 1000000)
    {
        return((Amount - 499999) / 100) * 10;
    }
    else if(Amount >= 1000000 && Amount < 2000000)
    {
        return(((Amount - 999999 )/ 100) * 20) + 50000;
    }
    else if(Amount > 2000000 )
    {
        return (((Amount - 1999999) / 100) * 30) + 50000 + 200000;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int income = 0, Tax = 0;

    printf("\n Enter Income => ");
    scanf("%d",&income);

    Tax = incometax(income);

    printf("\n Your Income => %d \n Income Tax => %d",income,Tax);

    getch();
    return 0;
}
