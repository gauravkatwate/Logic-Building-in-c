#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int bool;

bool Cheak(int no)
{
    if(no > 0)
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    int ino = 0;
    bool ck = False;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    ck = Cheak(ino);

    if(ck == True)
    {
        printf("\n Given Number Are Positive ");
    }
    else
    {
        printf("\n Given Number Are Negative ");
    }

    getch();
    return 0;
}
