#include<stdio.h>
#include<conio.h>

#define true 1
#define false 0

typedef int bool;

bool CheckZero(int no)
{
     while(no != 0)
     {
         int digit = 0;

         digit = no % 10;
         if(digit == 0)
         {
            return true;
         }
         no = no / 10;
     }
     return false;
}

int main()
{
    int ino = 0;
    bool bret = false;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    bret = CheckZero(ino);

    if(bret == true)
    {
        printf("\n It Contain Zero");
    }
    else
    {
        printf("\n There Is No Zero");
    }

    getch();
    return 0;
}
