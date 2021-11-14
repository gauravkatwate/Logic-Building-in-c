#include<stdio.h>
#include<conio.h>

void EvenFact(int no)
{
  int i = 0;

  if(no <= 0)
  {
    no = -no;
  }

  i = no / 2;

  while(i != 0 )
  {
      if(no % i == 0 && i % 2 == 0)
      {
          printf("\n %d",i);
      }
      i--;
  }
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    EvenFact(ino);

    getch();
    return 0;
}
