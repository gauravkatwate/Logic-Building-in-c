#include<stdio.h>
#include<conio.h>

void Display(int no)
{
   int icnt = 0;

    while(icnt < no)
    {
        printf(" * ");
        icnt++;
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
