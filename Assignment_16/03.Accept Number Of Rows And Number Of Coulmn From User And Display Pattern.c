#include<stdio.h>
#include<conio.h>

void Display(int r, int c)
{
    char ch = 'A';
    int i = 0, j = 0;

    for(i = 1; i <= r; i++,ch++)
    {
        for(j = 1; j <= c; j++)
        {
            printf(" %c ",ch);
        }
        printf("\n");
    }
}
int main()
{
    int r = 0, c = 0;

    printf("\n Enter Rows Count =>");
    scanf("%d",&r);

    printf("\n Enter Columns Count =>");
    scanf("%d",&c);

    Display(r,c);

    getch();
    return 0;
}
