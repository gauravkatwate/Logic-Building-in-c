#include<stdio.h>
#include<conio.h>

typedef int bool;

#define true 1
#define false 0

bool checkgreter(int ino)
{
  if(ino > 100)
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
    int ino = 0;
    bool bret = false;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    bret = checkgreter(ino);

    if(bret == 1)
    {
        printf("\n Given Number Greater Than 100.");
    }
    else
    {
        printf("\n Given Number Less Than 100. ");
    }
}
