#include<stdio.h>
#include<conio.h>

float SquareMeter(int SFeet)
{
    return SFeet * 0.0929;
}

int main()
{
    int SFeet = 0;

    printf("\n Enter Area In Squere => ");
    scanf("%d",&SFeet);

    printf("\n %d Squer Feet = %f Squer Meter.",SFeet,SquareMeter(SFeet));

    getch();
    return 0;
}
