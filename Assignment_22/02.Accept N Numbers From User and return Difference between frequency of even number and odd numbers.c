#include<stdio.h>
#include<conio.h>

int Display(int Arr[], int j)
{
    int i = 0, o = 0, e = 0;

    for(i = 0; i < j; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    return e - o;
}

int main()
{
    int i = 0, cnt = 0;
    int *p = NULL;

    printf("\n Enter Count of Numbers =>");
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

    printf("\n Diffrence between Even & odd Numbers Frequency Is => %d",Display(p,cnt));

    free(p);
    getch();
    return 0;
}
