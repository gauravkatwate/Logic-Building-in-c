#include<stdio.h>
#include<conio.h>

void printPattern(int no)
{
    int i = 0, j = 0;
        j = no * 2;

  for(i = 1; i <= j; i++)
  {
      if(i <= (j / 2) )
      {
           printf(" * ");
      }
      else
      {
          printf(" # ");
      }
  }
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    printPattern(ino);

    getch();
    return 0;
}
