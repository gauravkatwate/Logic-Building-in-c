#include<stdio.h>
#include<conio.h>

int GetMax(int Arr[],int j)
{
    int i = 0, max = 0;

    max = Arr[i];

    for(i = 0; i < j; i++)
    {
      if(max < Arr[i])
      {
          max = Arr[i];
      }
    }

    return max;
}

int main()
{
    int i = 0, cnt = 0;
    int *p = NULL;

    printf("\n Enter The Count Of Numbers =>");
    scanf("%d",&cnt);

    p = (int*)malloc(cnt * sizeof(int));

    if(p == NULL)
    {
        printf("\n Unable To Allocate Memory");
        return -1;
    }

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Number =>",i + 1);
        scanf("%d",&p[i]);
    }

    printf("\n Maximum Number Is => %d",GetMax(p,cnt));

    free(p);
    getch();
    return 0;
}
