#include<stdio.h>
#include<conio.h>

void Display(int r, int c)
{
    int i = 0, j = 0;

    for(i = 1; i <= r; i++)
    {
        for(j = c; 1 <= j; j--)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
}

int main()
{
    int r = 0, c = 0;

    printf("\n Enter Row Count =>");
    scanf("%d",&r);

    printf("\n Enter Column Count =>");
    scanf("%d",&c);

    Display(r , c);

    getch();
    return 0;
}
