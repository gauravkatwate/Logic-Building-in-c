#include<stdio.h>
#include<conio.h>

int SumNonFact(int no)
{
    int i = 0, sum = 0;

    for(i = 1; i <= no; i++)
    {
        if(no % i == 0)
        {

        }
        else
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    printf("Summetion Of Non Factors Is %d",SumNonFact(ino));

    getch();
    return 0;
}
