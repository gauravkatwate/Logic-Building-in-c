#include<stdio.h>
#include<conio.h>

void Print(int no)
{
    int i = 0;

    for(i = -no; i <= no; i++)
    {
        printf("  %d  ",i);
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
