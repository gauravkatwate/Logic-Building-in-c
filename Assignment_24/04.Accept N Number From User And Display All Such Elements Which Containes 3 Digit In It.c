#include<stdio.h>
#include<conio.h>

void Display(int Arr[],int j)
{
    int i = 0,digit = 0,k = 0,temp = 0;

    for(i = 0; i < j; i++)
    {
        temp = Arr[i];
        k = 0;
        while(temp != 0)
        {
            digit = temp % 10;
            temp = temp / 10;
            k++;
        }

        if(k == 3)
        {
            printf("\n %d",Arr[i]);
        }
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
        printf("\n Enter %d Number =>");\
        scanf("%d",&p[i]);
    }

    printf("\n Three Digit Numbers Is =>");

    Display(p,cnt);

    free(p);
    getch();
    return 0;
}
