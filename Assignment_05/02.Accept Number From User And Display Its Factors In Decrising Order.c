#include<stdio.h>
#include<conio.h>

void factrev(int no)
{
    int i = 0;

    for(i = no/2; i >= 0 ; i--)
    {
        if(no % i == 0)
        {
            printf("%d  ",i);
        }
    }
}
int main()
{
    int ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    factrev(ino);

    getch();
    return 0;
}
