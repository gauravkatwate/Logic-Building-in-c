#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool Check(int Arr[],int j, int no)
{
    int i = 0;

    for(i = 0; i < j; i++)
    {
        if(no == Arr[i])
        {
            return TRUE;
        }
    }
}

int main()
{
    int cnt = 0, i = 0,no = 0;
    int *p = NULL;

    printf("\n Enter Count oF Numbers =>");
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

    printf("\n Enter Any Number To To Get Present Or Not =>");
    scanf("%d",&no);

    if(Check(p,cnt,no) == TRUE)
    {
        printf("\n TRUE");
    }
    else
    {
        printf("\n FALSE");
    }

    free(p);
    getch();
    return 0;
}
