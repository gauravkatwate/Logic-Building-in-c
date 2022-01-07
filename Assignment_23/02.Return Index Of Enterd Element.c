#include<stdio.h>
#include<conio.h>

int Index(int Arr[],int j,int no)
{
    int i = 0;

    for(i = 0; i < j; i++)
    {
        if(no == Arr[i])
        {
            return i;
        }
    }
}

int main()
{
    int i = 0, cnt = 0,no = 0;
    int *p = NULL;

    printf("\n Enter Count Of Numbers =>");
    scanf("%d",&cnt);

    p = (int*)malloc(cnt * sizeof(int));

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

    printf("\n Enter Any Number To Get This Number Index =>");
    scanf("%d",&no);

    printf("\n Index Of Given Element Is => %d",Index(p,cnt,no));

    free(p);
    getch();
    return 0;
}
