#include<stdio.h>
#include<conio.h>

int Freq(int Arr[], int j)
{
    int i = 0, k = 0;

    for(i = 0; i < j; i++)
    {
        if(Arr[i] == 11)
        {
            k++;
        }
    }
    return k;
}
int main()
{
    int i = 0, cnt = 0;
    int *p = NULL;

    printf("\n Enter Count Of Student =>");
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

    printf("\n Frequency Of 11 Is => %d",Freq(p,cnt));

    free(p);
    getch();
    return 0;
}
