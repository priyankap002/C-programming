#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0,c=0;
    printf("\n\n======^^Tables in range 7-12^^=====\n\n");
    for(R=1;R<=10;R++)
    {
        for(c=7;c<=12;c++)
        {
            printf("%3d",R*c);
        }
        printf("\n");

    }

    printf("\n\n thanks");
    printf("\n\n======.....======\n\n");

    getch();
    return 0;
}
