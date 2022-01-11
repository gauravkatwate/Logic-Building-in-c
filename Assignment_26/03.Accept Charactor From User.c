///////////////////////////////////////////////////////////////////////////////////////
/*3. Accept character from user. If it is capital then display all the characters from
     the input characters till Z. If input character is small then print all the characters
	 in reverse order till a. In other cases return directly.
*/
// Input :  Q
// Output : Q R S T U V W X Y Z
// Input :  m
// Output : m l k j i h g f e d c b a
// Input :  8
// Output :
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
       while(ch <= 90)
       {
           printf(" %c ",ch);
           ch = ch + 1;
       }
    }
    else if(ch >= 97 && ch <= 122)
    {
       while(ch >= 97)
       {
           printf(" %c ",ch);
           ch = ch - 1;
       }
    }
    else
    {
        printf("\n You Are Enterd Number Or Special Symbole");
    }
}

int main()
{
    char ch = '\0';

    printf("\n Enter Any Character =>");
    scanf("%c",&ch);

    Display(ch);

    getch();
    return 0;
}
