#include<stdio.h>
#include<conio.h>

void Number(int no)
{
    no <= 50 ? printf("\n Small") : (no >= 50 && no <= 100) ? printf("\n Medium") : printf("\n large");
}
int main()
{
    int ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    Number(ino);

    getch();
    return 0;
}
