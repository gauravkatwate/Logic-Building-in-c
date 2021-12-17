#include<stdio.h>
#include<conio.h>

void Display(int no)
{
    int i = 0;

    for(i = 1; i <= no; i++)
    {
         printf("  %d  *",i);
    }
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    Display(ino);

    getch();
    return 0;
}
