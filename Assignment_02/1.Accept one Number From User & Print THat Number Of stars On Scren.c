#include<stdio.h>
#include<conio.h>

void Display(int no)
{
    while(no != 0)
    {
        printf(" * ");
        no--;
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
