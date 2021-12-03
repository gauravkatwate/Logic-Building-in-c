#include<stdio.h>
#include<conio.h>

int Fact(int no)
{
    int fact = 1;

    if(no < 0)
    {
        no = -(no);
    }
    while(no > 1)
    {
        fact = fact * no;
        no--;
    }
    return fact;
}
int main()
{
    int ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    printf("\n Factorial of %d Is => %d",ino,Fact(ino));

    getch();
    return 0;
}
