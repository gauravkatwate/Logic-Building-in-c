#include<stdio.h>
#include<conio.h>

void ConvertCase(char ch)
{
  if(ch >= 'A' && ch <= 'Z')
  {
      printf("%c",ch + 32);
  }
  else if(ch >= 'a' && ch <= 'z' )
  {
      printf("%c",ch - 32);
  }
}
int main()
{
    char ch = '\0';

    printf("\n Enter Any Charactor =>");
    scanf("%c",&ch);

    ConvertCase(ch);

    getch();
    return 0;
}
