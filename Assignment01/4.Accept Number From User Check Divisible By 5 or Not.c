#include<stdio.h>
#include<conio.h>

typedef int bool;
#define True 1
#define False 0

int Check(int ino)
{
    if(ino % 5 == 0)
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
    bool bret = False;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    bret = Check(ino);

    if(bret == True)
    {
        printf("\n Given Number Divisible By 5");
    }
    else
    {
        printf("\n Given Number Not Divisible By 5");
    }

    getch();
    return 0;
}
