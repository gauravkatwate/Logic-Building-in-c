#include<stdio.h>
#include<conio.h>

void Display(int r, int c)
{
    int i = 0, j = 0;

    for(i = 0; i <= r; i++)
    {
        for(j = 0; j <= c; j++)
        {
           if(i == j)
           {
               printf(" $ ");
           }
           else if(i <= j)
           {
               printf(" * ");
           }
           else
           {
               printf(" # ");
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

    printf("\n Enter Count Of Column =>");
    scanf("%d",&c);

    Display(r,c);

    getch();
    return 0;
}
