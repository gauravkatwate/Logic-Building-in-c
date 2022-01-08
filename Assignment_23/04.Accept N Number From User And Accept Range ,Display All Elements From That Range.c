#include<stdio.h>
#include<conio.h>

void Display(int Arr[], int j, int sp, int ep)
{
    int i = 0;

    for(i = 0; i < j; i++)
    {
        if(Arr[i] > sp && Arr[i] < ep)
        {
            printf("\n %d",Arr[i]);
        }
    }
}

int main()
{
    int i = 0, cnt = 0,SP = 0, EP = 0;
    int *p = NULL;

    printf("\n Enter Count Of Numbers =>");
    scanf("%d",&cnt);

    p = (int*)malloc(cnt * sizeof(int));

    if(p == NULL)
    {
        printf("\n Cannot Allocate Memory");
        return 0;
    }

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Number =>",i + 1);
        scanf("%d",&p[i]);
    }

    printf("\n Enter Start Point =>");
    scanf("%d",&SP);

    printf("\n Enter End Point =>");
    scanf("%d",&EP);

    Display(p,cnt,SP,EP);

    free(p);
    getch();
    return 0;
}
