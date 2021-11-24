#include<stdio.h>
#include<conio.h>

int TouristBill(int km)
{
    int ino = 0;

    if(km < 100)
    {
        return km * 25;
    }
    else if(km > 100)
    {
       ino = km - 100;
       return ((ino * 15) + (100 * 25));
    }
}
int main()
{
    int KM = 0, rent = 0;

    printf("\n Enter Running Kelometers => ");
    scanf("%d",&KM);

    rent = TouristBill(KM);

    printf("\n Rent Is => %d",rent);

    getch();
    return 0;
}
