#include<stdio.h>
#include<conio.h>

int main()
{
    int cnt=0;

    printf("\n Hello \n ");

    cnt=1;

    do
    {
        printf("\n Welcome %d",cnt);
        cnt++;;
    }
    while(cnt<=10);

    printf("\n Thanks \n");

    getch();
    return 0;
}

