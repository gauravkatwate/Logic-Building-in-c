#include<stdio.h>
#include<conio.h>

void print(int no)
{
    int i = 0;

  for(i = 1; i <= no; i++)
  {
      printf("\n * ");
  }
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    print(ino);

    getch();
    return 0;
}
