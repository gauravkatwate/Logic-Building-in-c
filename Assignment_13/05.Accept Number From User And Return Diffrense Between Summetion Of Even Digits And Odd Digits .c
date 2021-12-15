#include<stdio.h>
#include<conio.h>

int CountDiff(int no)
{
  int digit = 0, ESum = 0, OSum = 0;

  while(no != 0)
  {
      digit = no % 10;
      if(digit % 2 == 0)
      {
          ESum = ESum + digit;
      }
      else
      {
          OSum = OSum + digit;
      }
      no = no / 10;
  }
  return ESum - OSum;
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    printf("\n Diffrense Of Even Digit Summetion And Odd Digit Summetion Is %d",CountDiff(ino));

    getch();
    return 0;
}
