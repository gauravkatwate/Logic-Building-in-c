#include<stdio.h>
#include<conio.h>

int Divide(int no1,int no2)
{
    int iAns = 0;

    if(no2 > no1)
    {
        return -1;
    }

    iAns = no1 / no2;

    return iAns;

}

int main()
{
    int ino1 = 0, ino2 = 0;
    int ans = 0;

    printf("\n Enter First Number => ");
    scanf("%d",&ino1);

    printf("\n Enter Second number => ");
    scanf("%d",&ino2);

    ans = Divide(ino1,ino2);

    printf("\n Division Of Given Number Is %d",ans);

    getch();
    return 0;
}
