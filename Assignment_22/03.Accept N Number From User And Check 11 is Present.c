#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int bool;

bool check(int Arr[], int j)
{
    int i = 0;

    for(i = 0; i < j; i++)
    {
        if(Arr[i] == 11)
        {
            return True;
        }
    }
    return False;
}

int main()
{
    int i = 0, cnt = 0;
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

    if(check(p,cnt) == True)
    {
        printf("\n 11 Is Present");
    }
    else
    {
        printf("\n 11 Is Absent");
    }

    free(p);
    getch();
    return 0;
}
