#include<stdio.h>
#include<conio.h>

int Count(int no)
{
   int i = 0, digit = 0;

   while(no != 0)
   {
       digit = no % 10;
       if(digit > 3 && digit < 7)
       {
           i++;
       }
       no = no / 10;
   }
   return i;
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    printf("\n Count Of Digits Between 3 & 7 Is => %d",Count(ino));

    getch();
    return 0;

}
