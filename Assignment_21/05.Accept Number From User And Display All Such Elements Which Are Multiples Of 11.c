#include<stdio.h>
#include<conio.h>

void Display(int Arr[],int j)
{
    int i = 0;

    for(i = 0; i < j; i++)
    {
        if(Arr[i] % 11 == 0)
        {
            printf("\n %d",Arr[i]);
        }
    }
}

int main()
{
    int i = 0,cnt = 0;
    int *p = NULL;

    printf("\n Enter Count of Number =>");
    scanf("%d",&cnt);

    p = (int*)malloc(cnt * sizeof(int));

    if(p == NULL)
    {
        printf("\n Cannot Allocate memory");
        return -1;
    }

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Number =>",i + 1);
        scanf("%d",&p[i]);
    }

    Display(p,cnt);

    free(p);

    getch();
    return 0;
}
