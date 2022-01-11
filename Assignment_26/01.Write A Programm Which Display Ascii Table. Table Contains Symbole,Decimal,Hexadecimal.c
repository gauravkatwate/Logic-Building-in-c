#include<stdio.h>
#include<conio.h>

void Dispaly(int Ch)
{
    printf("\n **********ASCII Table**********\n");
    while(Ch <= 255)
    {
        printf("\t%d => %c",Ch,Ch);
        printf("\n");

        Ch++;
    }
    printf("\n **********ASCII Table**********");
}

int main()
{
    int Ch = '\0';

    Dispaly(Ch);

    getch();
    return 0;
}
