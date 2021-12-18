#include<stdio.h>
#include<conio.h>

void Display(int r, int c)
{
    int i = 0 , j = 0;

    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
           printf(" %d ",j);
        }
        printf("\n");
    }
}
int main()
{
    int Row = 0, Column = 0;

    printf("\n Enter Number Of Rows =>");
    scanf("%d",&Row);

    printf("\n Enter Number Of Column =>");
    scanf("%d",&Column);

    Display(Row,Column);

    getch();
    return 0;
}
