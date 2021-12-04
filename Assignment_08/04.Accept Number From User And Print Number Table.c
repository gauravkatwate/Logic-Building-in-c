#include<stdio.h>
#include<conio.h>

void PrintTable(int no)
{
  int i = 0;

  if(no < 0)
  {
      no = -(no);
  }

  for(i = 1; i <= 10; i++)
  {
      printf("\n %d",no * i);
  }
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    PrintTable(ino);

    getch();
    return 0;
}
