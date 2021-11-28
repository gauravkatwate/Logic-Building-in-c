#include<stdio.h>
#include<conio.h>

typedef int bool;

#define true 1
#define false 0

bool CheckEqual(int ino1,int ino2)
{
   if(ino1 == ino2)
   {
       return true;
   }
   else
   {
       return false;
   }
}

int main()
{
    int ino1 = 0, ino2 = 0;
    bool bret = false;

    printf("\n Enter First Number => ");
    scanf("%d",&ino1);

    printf("\n Enter Second Number => ");
    scanf("%d",&ino2);

    bret = CheckEqual(ino1,ino2);

    if(bret == 1)
    {
        printf("\n Enterd Two Numbers Are Equal.");
    }
    else
    {
        printf("\n Enterd Two Numbers Are Not Equal.");
    }

    getch();
    return 0;

}
