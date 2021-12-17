#include<stdio.h>
#include<conio.h>

void PrintPattern(int no)
{
  int i = 0;
  char ch = 'A';

  for(i = 1; i <= no; i++)
  {
      printf(" %c ",ch++);
  }

}

int main()
{
   int ino = 0;

   printf("\n Enter Any Number =>");
   scanf("%d",&ino);

   PrintPattern(ino);

   getch();
   return 0;
}
