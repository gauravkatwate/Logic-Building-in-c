#include<stdio.h>
#include<conio.h>

void Digitsum(int Arr[],int j)
{
    int i = 0,sum = 0;

    for(i = 0; i < j; i++)
    {
        sum = 0;

        while(Arr[i] != 0)
        {
            sum = sum + (Arr[i] % 10);
            Arr[i] /= 10;
        }

        printf("  %d  ",sum);
    }
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
        return -1;
    }

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Number =>",i + 1);
        scanf("%d",&p[i]);
    }

    Digitsum(p , cnt);

    free(p);
    getch();
    return 0;
}
