#include<stdio.h>
#include<conio.h>
#define True 1
#define False 0

typedef bool;
typedef unsigned int UINT;

bool chkbit(UINT no)
{
    if(no & (1 << 12))
    {
        return True;
    }
}

int main()
{
    int no = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&no);

    if(chkbit(no))
    {
        printf("\n 15 bit is on");
    }
    else
    {
        printf("\n 15 bit is off");
    }

    getch();
    return 0;
}
