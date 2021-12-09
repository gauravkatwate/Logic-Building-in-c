#include<stdio.h>
#include<conio.h>

#define PI 3.14

double CircleArea(int Rad)
{
     return PI * Rad * Rad;
}

int main()
{
     float Rad = 0.0;

     printf("\n Enter Radious Of Circle => ");
     scanf("%f",&Rad);

     printf("\n Area Of Circle => %f",CircleArea(Rad));

     getch();
     return 0;
}
