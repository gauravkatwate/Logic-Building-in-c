#include<stdio.h>
#include<conio.h>

DisplayPattern(int r , int c)
{
    int i = 0, j = 0;

    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
int main()
{
    int row = 0, column = 0;

    printf("\n Enter Number Of Rows =>");
    scanf("%d",&row);

    printf("\n Enter Number Of Colunm =>");
    scanf("%d",&column);

    DisplayPattern(row,column);

    getch();
    return 0;
}
