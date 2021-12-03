#include<stdio.h>
#include<conio.h>

void PrintWord(int no)
{
    if(no < 0)
    {
        no = -(no);
    }

    switch(no)
    {
    case 1:
        printf("\n one");
        break;

    case 2:
        printf("\n Two");
        break;

    case 3:
        printf("\n Three");
        break;

    case 4:
        printf("\n Four");
        break;

    case 5:
        printf("\n Five");
        break;

    case 6:
        printf("\n Six");
        break;

    case 7:
        printf("\n Seven");
        break;

    case 8:
        printf("\n Eight");
        break;

    case 9:
        printf("\n Nine");
        break;

    default:
        printf("\n Enter Valid Number.");
        break;
    }
}

int main()
{
    int ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    PrintWord(ino);

    getch();
    return 0;
}
