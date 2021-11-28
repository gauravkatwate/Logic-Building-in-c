#include<stdio.h>
#include<conio.h>


void NonFact(int no)
{
 int i = 0;
 for(i = 1; i <= no/2; i++)
 {
     if(no % i == 0)
     {

     }
     else
     {
         printf("%d  ",i);
     }
 }
}

int main()
{
 int ino = 0;

 printf("\n Enter Any Number =>");
 scanf("%d",&ino);

 NonFact(ino);

 getch();
 return 0;
}
