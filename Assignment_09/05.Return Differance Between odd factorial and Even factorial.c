#include<stdio.h>
#include<conio.h>

int EvenOddFactorial(int no)
{
    int Efact = 1, Ofact = 1;

    if(no < 0)
    {
        no = -no;
    }

    while(no != 0)
    {
        if(no % 2 == 0)
        {
            Efact = Efact * no;
        }
        else
        {
            Ofact = Ofact * no;
        }
        no--;
    }
    return Efact - Ofact;
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    printf("\n Factorial Defference is %d.",EvenOddFactorial(ino));

    getch();
    return 0;
}
