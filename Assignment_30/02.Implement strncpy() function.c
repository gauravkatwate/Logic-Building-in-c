#include<stdio.h>
#include<conio.h>

void strncpy(char *str,char *str2, int n)
{
    while(n > 0)
    {
        *str2 = *str;
        *str2++;
        *str++;
        n--;
    }
}

int main()
{
    char str[20];
    char str2[20];
    int n = 0;

    printf("\n Enter Any String=>");\
    gets(str);

    printf("\n Enter any Number =>");
    scanf("%d",&n);

    strncpy(str,str2,n);

    printf("\n Orignal String => %s",str);
    printf("\n Copy String => %s",str2);

    getch();
    return 0;
}
