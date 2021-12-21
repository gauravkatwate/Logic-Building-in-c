#include<stdio.h>
#include<conio.h>

void Display(int r, int c)
{
    int i = 0, j = 0;

    for(i = r; i >= 1; i--)
    {
        for(j = 1; j <= c; j++)
        {
            printf(" %d ",i);
        }
        printf("\n");
    }
}
int main()
{
   int r = 0, c = 0;

   printf("\n Enter Count Of Rows =>");
   scanf("%d",&r);

   printf("\n Enter Count Column =>");
   scanf("%d",&c);

   Display(r,c);

   getch();
   return 0;
}
