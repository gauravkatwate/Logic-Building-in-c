#include<stdio.h>
#include<conio.h>

int OddFactorial(int no)
{
 int fact = 1;

    if(no < 0)
    {
      no = -no;
    }

    while(no != 0)
    {
        if(no % 2 == 0)
        {

        }
        else
        {
            fact = fact * no;
        }
        no--;
    }
    return fact;
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    printf("\n Odd Factorial of number Is => %d",OddFactorial(ino));

    getch();
    return 0;
}
