#include<stdio.h>
#include<conio.h>

void Print(int no)
{
    int i = 0;

    for(i = 1; i <= no; i++)
    {
        if(i % 2 != 0)
        {
           printf("\n %d",i);
        }
    }
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    Print(ino);

    getch();
    return 0;
}
