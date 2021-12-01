#include<stdio.h>
#include<conio.h>

int Mult(int no1, int no2, int no3)
{
    int mult = 0;

    if(no1 == 0 || no2 == 0 || no3 == 0)
    {
        if(no1 == 0)
        {
            no1 = 1;
        }
        if(no2 == 0)
        {
            no2 = 1;
        }
        if(no3 == 0)
        {
            no3 = 1;
        }
    }

    mult = no1 * no2 * no3;

    return mult;
}

int main()
{
    int ino1 = 0, ino2 = 0, ino3 = 0, mult = 0;

    printf("\n Enter First Number => ");
    scanf("%d",&ino1);

    printf("\n Enter Second Number =>");
    scanf("%d",&ino2);

    printf("\n Enter Third Number => ");
    scanf("%d",&ino3);

   mult = Mult(ino1, ino2, ino3);

    printf("\n Multiplication Of Given Three Numbers Is %d",mult);

    getch();
    return 0;
}
