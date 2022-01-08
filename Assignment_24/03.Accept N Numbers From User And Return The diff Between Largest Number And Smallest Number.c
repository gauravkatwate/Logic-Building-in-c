#include<stdio.h>
#include<conio.h>

int Diffmaxmin(int Arr[],int j)
{
    int i = 0, max = 0, min = 0, Diff = 0;

    max = min = Arr[i];

    for(i = 0; i < j; i++)
    {
        if(max < Arr[i])
        {
            max = Arr[i];
        }
        if(min > Arr[i])
        {
            min = Arr[i];
        }
    }

    return max - min;
}
int main()
{
    int i = 0, cnt = 0;
    int *p = NULL;

    printf("\n Enter Count Of Numbers =>");\
    scanf("%d",&cnt);

    p = (int*)malloc(cnt * sizeof(int));

    if(p == NULL)
    {
        printf("\n Cannot Allocate Memory");
        return -1;
    }

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Number =>");
        scanf("%d",&p[i]);
    }

    printf("\n Differance Between Maximum And Minimum Number Is => %d",Diffmaxmin(p,cnt));

    free(p);
    getch();
    return 0;
}
