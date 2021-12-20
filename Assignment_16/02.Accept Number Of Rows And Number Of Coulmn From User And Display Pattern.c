#include<stdio.h>
#include<conio.h>

void Display(int r , int c)
{
    char ch = '/0';
    int i = 0, j = 0;

    for(i = 1; i <= r; i++)
    {
        for(ch = 'A',j = 1; j <= c; j++,ch++)
        {
            if(i % 2 != 0)
            {
                printf(" %c ",ch);
            }
            else
            {
                printf(" %c ",ch + 32);
            }
        }
        printf("\n");
    }
}
int main()
{
    int r = 0, c = 0;

    printf("\n Enter Rows Count =>");
    scanf("%d",&r);

    printf("\n Enter Column Count =>");
    scanf("%d",&c);

    Display(r,c);

    getch();
    return 0;
}
