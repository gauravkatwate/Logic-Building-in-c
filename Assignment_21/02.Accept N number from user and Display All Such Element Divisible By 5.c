#include<stdio.h>
#include<conio.h>

void Display(int Arr[],int j)
{
    int i = 0;
    for( i = 0; i < j; i++)
    {
        if(Arr[i] % 5 == 0)
        {
            printf("\n %d Number Divisible 5",Arr[i]);
        }
    }
}

int main()
{
    int size = 0, i = 0;
    int *p = NULL;

    printf("\n Enter Count Of Numbers =>");
    scanf("%d",&size);

    p = (int*)malloc(size * sizeof(int));

    for( i = 0; i < size; i++)
    {
        printf("\n Enter %d Number =>",i + 1);
        scanf("%d",&p[i]);
    }

    Display(p,size);

    getch();
    return 0;
}
