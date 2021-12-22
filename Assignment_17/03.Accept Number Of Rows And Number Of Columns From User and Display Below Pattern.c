#include<stdio.h>
#include<conio.h>

void Display(int r, int c)
{
    int i = 0, j = 0;

    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
            if(i % 2 != 0)
            {
                printf(" %c ",96 + j);
            }
            else
            {
                printf(" %d ",j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int r = 0, c = 0;

    printf("\n Enter Count Of Rows =>");
    scanf("%d",&r);

    printf("\n Enter Count Of Columns =>");
    scanf("%d",&c);

    Display(r,c);

    getch();
    return 0;
}
