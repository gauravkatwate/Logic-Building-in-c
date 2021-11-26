#include<stdio.h>
#include<conio.h>

int FactDiff(int no)
{
   int i = 0, Fsum = 0, NFsum = 0;

   for(i = 1; i < no; i++)
   {
        if(no % i == 0)
       {
           Fsum = Fsum + i;
       }
       else
       {
           NFsum = NFsum + i;
       }
   }
   return  Fsum - NFsum;;
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    printf("\n Differance Between Factors And Non Factors Summetion Is %d",FactDiff(ino));

    getch();
    return 0;
}
