#include<stdio.h>
#include<conio.h>

void CalculateBill(int bill)
{
    int AMT = 0;

    if(bill > 500 && bill < 1500)
    {
       AMT = (bill * 10) / 100;
       printf("\n Your Bill Amount %d OF 10%% Discount",bill - AMT);
    }
    else if(bill > 1500)
    {
       AMT = (bill * 15) / 100;
       printf("\n Your Bill Amount %d OF 15% Discount",bill - AMT);
    }
    else
    {
       printf("\n Your Bill Amount Of %d",bill);
    }

    return 0;
}

int main()
{
    int Amt = 0,Bill = 0;

    printf("\n Enter Bill Amount Of Coustemer => ");
    scanf("%d",&Bill);

    CalculateBill(Bill);

    getch();
    return 0;
}
