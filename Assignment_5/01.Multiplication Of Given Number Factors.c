#include<stdio.h>
#include<conio.h>

int MultFact(int No)
{
    int i = 0, mult = 1, j = 0;

    j = No / 2;

    for(i = 1; i <=j ; i++)
    {
         if(No % i == 0)
         {
          mult = mult * i;
         }
    }
    return mult;
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    printf("\nGiven Number Factors Multiplication Is => %d", MultFact(ino));

    getch();
    return 0;
}
