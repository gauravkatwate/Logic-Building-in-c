#include<stdio.h>
#include<conio.h>

double RectArea(float H,float W)
{
    return H * W;
}

int main()
{
    float Height = 0.0,Width = 0.0;

    printf("\n Enter Height Of Ractrangle =>");
    scanf("%f",&Height);

    printf("\n Enter Width Of Ractrangle =>");
    scanf("%f",&Width);

    printf("\n Area Of Ractrangle Is => %f",RectArea(Height,Width));

    getch();
    return 0;
}
