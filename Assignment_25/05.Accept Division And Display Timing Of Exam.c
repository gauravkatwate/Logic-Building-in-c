#include<stdio.h>
#include<conio.h>

void ShowTiming(char ch)
{
    if(ch == 'A')
    {
        printf("\n Your Exam At 7 AM");
    }
    else if(ch == 'B')
    {
        printf("\n Your Exam Is 8.30 AM");
    }
    else if(ch == 'C')
    {
        printf("\n Your Exam Is 9.20 AM");
    }
    else if(ch == 'D')
    {
        printf("\n Your Exam Is 10.30 AM");
    }
    else
    {
        printf("\n Enter Valid Choise.");
    }
}

int main()
{
    char ch = '\0';

    printf("\n Enter Your Division(A,B,C,D) => ");
    scanf("%c",&ch);

    ShowTiming(ch);

    getch();
    return 0;
}
