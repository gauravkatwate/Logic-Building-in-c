#include<stdio.h>
#include<conio.h>

int ConvertMeter(int KM)
{
    return KM * 1000;
}

int main()
{
    int KM = 0;

    printf("\n Enter Kelometer =>");
    scanf("%d",&KM);

    printf("\n %d Kelometer = %d Meter.",KM,ConvertMeter(KM));

    getch();
    return 0;
}
