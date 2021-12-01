#include<stdio.h>
#include<conio.h>
Print(int ino)
{
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
        printf("  %d  ",ino * i);
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
