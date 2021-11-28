#include<stdio.h>
#include<conio.h>

void Display(int no1,int no2)
{
    while(no2 != 0)
    {
        printf("\n%d",no1);
        no2--;
    }
    /*
    for(i = 1 ; i <= no2 ; i++)
    {
        printf("\n %d",no1);
    }
    */
}
int main()
{
    int ino1 = 0,ino2 = 0;

    printf("\n Enter First Number => ");
    scanf("%d",&ino1);

    printf("\n Enter Second Number => ");
    scanf("%d",&ino2);

    Display(ino1,ino2);

    getch();
    return 0;
}
