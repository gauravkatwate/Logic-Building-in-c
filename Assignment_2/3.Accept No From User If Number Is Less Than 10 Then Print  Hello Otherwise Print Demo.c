#include<stdio.h>
#include<conio.h>

void Display(int no)
{
    if(no < 10)
    {
        printf("\n Hello");
    }
    else
    {
        printf("\n Demo");
    }
}
int main()
{
    int ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    Display(ino);

    getch();
    return 0;
}
