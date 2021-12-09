#include<stdio.h>
#include<conio.h>

void Display(int SP,int EP)
{
  up:
  if(SP <= EP)
  {
     printf("  %d  ",SP);
     SP++;
     goto up;
  }
  else
  {
      printf("\n Envalid Range");
  }
}

int main()
{
    int SPoint = 0, EPoint = 0;

    printf("\n Enter Starting Point =>");
    scanf("%d",&SPoint);

    printf("\n Enter End Point =>");
    scanf("%d",&EPoint);

    Display(SPoint,EPoint);

    getch();
    return 0;
}
