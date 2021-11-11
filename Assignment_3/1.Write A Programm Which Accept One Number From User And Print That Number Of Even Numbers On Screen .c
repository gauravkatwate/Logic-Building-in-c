#include<stdio.h>
#include<conio.h>

void Display(int no)
{
  int i = 0, j = 2;

  if(no <= 0)
  {
      return;
  }

  for(i = 1; i <= no; i++)
  {
     if(j % 2 == 0)
     {
         printf("\n %d",j);
         j++;
         j++;
     }
  }
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    Display(ino);

    getch();
    return 0;
}
