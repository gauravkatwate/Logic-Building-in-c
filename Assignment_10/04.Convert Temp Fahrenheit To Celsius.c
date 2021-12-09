#include<stdio.h>
#include<conio.h>

float ConvertCelsius(float Temp)
{
    return (Temp - 32) * 5 / 9;
}

int main()
{
    float Temp = 0.0;

    printf("\n Enter Temprature => ");
    scanf("%f",&Temp);

    printf("\n %f Fahernheit = %f Celsius.",Temp,ConvertCelsius(Temp));

    getch();
    return 0;
}
