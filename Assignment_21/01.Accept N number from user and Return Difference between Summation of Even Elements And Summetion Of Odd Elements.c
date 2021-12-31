#include<stdio.h>
#include<conio.h>

int Diff(int Arr[], int length)
{
    int i = 0 , Esum = 0 , Osum = 0;

    for(i = 0; i < length; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            Esum = Esum + Arr[i];
        }
        else
        {
            Osum = Osum + Arr[i];
        }
    }
    return Esum - Osum;
}

int main()
{
    int N = 0, iret = 0 , icnt = 0 ;
    int *p = NULL;

    printf("\n Enter Number Of Elements =>");
    scanf("%d",&N);

    p = (int*)malloc(N * sizeof(int));

    if(p == NULL)
    {
        printf("\n Unable to Allocate Memory");
        return -1;
    }

    printf("Enter %d Element",N);

    for(icnt = 0; icnt < N; icnt++)
    {
        printf("Enter %d Element :",icnt + 1);
        scanf("%d",&p[icnt]);
    }

    printf("%d",Diff(p,N));

    free(p);

    getch();
    return 0;
}
