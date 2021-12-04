#include<stdio.h>
#include<conio.h>

void RevTable(int no)
{
    int i = 0;

    for(i = 10; i >= 1; i--)
    {
        printf("\n%d",i * no);
    }
}
int main()
{
    int ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    RevTable(ino);

    getch();
    return 0;
}
