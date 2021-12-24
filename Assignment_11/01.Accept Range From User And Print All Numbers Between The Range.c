#include<stdio.h>
#include<conio.h>

void Display(int SP,int EP)
{
  if(SP > EP)
  {
      printf("\n Envalid Range");
  }
  up:
  if(SP <= EP)
  {
     printf("  %d  ",SP);
     SP++;
     goto up;
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
