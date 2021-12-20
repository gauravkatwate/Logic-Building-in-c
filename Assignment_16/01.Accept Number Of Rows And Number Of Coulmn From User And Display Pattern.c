#include<stdio.h>
#include<conio.h>

void Display(int r, int c)
{
    int i = 0, j = 0;
    char ch = '/0';

    for(i = 1; i <= r; i++)
    {
        for(ch = 'A',j = 1; j <= c; j++,ch++)
        {
            printf(" %c ",ch);
        }
        printf("\n");
    }
}

int main()
{
    int r = 0, c = 0;

    printf("\n Enter Count Of Rows =>");
    scanf("%d",&r);

    printf("\n Enter Count Of Column =>");
    scanf("%d",&c);

    Display(r,c);

    getch();
    return 0;
}
