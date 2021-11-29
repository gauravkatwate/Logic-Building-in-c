#include<stdio.h>
#include<conio.h>


float CalcPer(float no1, float no2)
{
   if(no1 == 0 || no2 == 0)
   {
       printf("\n Invalid Marks...");
       getch();
       return 0;
   }

   return (no2 / no1) * 100.0;
}

int main()
{
    float TMarks = 0.0, OMarks = 0.0, per = 0.0;

    printf("\n Enter Total Marks =>");
    scanf("%d",&TMarks);

    printf("\n Enter Student Obtained Marks => ");
    scanf("%d",&OMarks);

    per = CalcPer(TMarks, OMarks);

    printf("\n Percentage Of Student Is %0.2f",per);

    getch();
    return 0;

}
