#include<stdio.h>
#include<conio.h>

void printPattern(int no)
{
  int i = 0;

  for(i = 1; i <= no; i++)
  {
      if(i <= (no / 2) )
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

    printPattern(ino * 2);

    getch();
    return 0;
}
