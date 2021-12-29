#include<stdio.h>
#include<conio.h>

void Display(int r, int c)
{
    int i = 0, j = 0;

    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
            if(i == 1 || j == 1 || i == r || j == c || i + j == r + 1)
            {
                printf(" * ");
            }
            else if(i + j < r + 1)
            {
                printf(" # ");
            }
            else
            {
                printf(" $ ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int r = 0, c = 0;

    printf("\n Enter Count oF Rows =>");
    scanf("%d",&r);

    printf("\n Enter Count Of Column =>");
    scanf("%d",&c);

    Display(r, c);

    getch();
    return 0;
}
