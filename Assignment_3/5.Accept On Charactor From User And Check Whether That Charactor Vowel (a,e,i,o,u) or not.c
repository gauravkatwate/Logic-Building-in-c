#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

int CheckVowel(char ch)
{
  if((ch == 'a' || ch == 'A') || (ch == 'e' || ch == 'E') || (ch == 'i' || ch == 'I') || (ch == 'o' || ch == 'O') || (ch == 'u' || ch == 'U'))
  {
      return True;
  }
  else
  {
      return False;
  }
}

int main()
{
    char ch = '\0';
    int r = 0;

    printf("\n Enter Any Charactor => ");
    scanf("%c",&ch);

     r = CheckVowel(ch);

    if(r == True)
    {
        printf("\n Given Charactor Is vowel");
    }
    else
    {
        printf("\n Given Charactor Is Not vowel");
    }

    getch();
    return 0;
}
