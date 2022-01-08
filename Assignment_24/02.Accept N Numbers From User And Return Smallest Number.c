#include<stdio.h>
#include<conio.h>

int Getmin(int Arr[],int j)
{
    int i = 0, min = 0;

    min = Arr[i];

    for(i = 0; i < j; i++)
    {
        if(min > Arr[i])
        {
           min = Arr[i];
        }
    }

    return min;
}

int main()
{
    int i = 0, cnt = 0;
    int *p = NULL;

    printf("\n Enter Count Of Numbers =>");
    scanf("%d",&cnt);

    p =(int*)malloc(cnt * sizeof(int));

    if(p == NULL)
    {
        printf("\n Cannot Allocate Memory");
        return -1;
    }

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Number =>",i + 1);
        scanf("%d",&p[i]);
    }

    printf("\n Minimum Number Is => %d",Getmin(p,cnt));

    free(p);
    getch();
    return 0;
}
