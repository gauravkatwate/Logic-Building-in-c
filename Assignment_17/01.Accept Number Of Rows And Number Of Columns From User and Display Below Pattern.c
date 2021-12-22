#include<stdio.h>
#include<conio.h>

void Display(int r , int c)
{
    int i = 0, j = 0,k = 1;

    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++,k++)
        {
            if( k == 10)
            {
              k = 1;
            }
            printf(" %d ",k);
        }
        printf("\n");
    }
}

int main()
{
    int Row = 0, Column = 0;

    printf("\n Enter Count Of Rows =>");
    scanf("%d",&Row);

    printf("\n Enter Count Of Column =>");
    scanf("%d",&Column);

    Display(Row,Column);

    getch();
    return 0;
}
