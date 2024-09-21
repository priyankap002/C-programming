#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,dig=0,zcnt=0;

    printf("\n Enter a Number= ");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
        dig=Temp%10;

        if(dig==0)
        {
            zcnt++;
        }
        Temp=Temp/10;
    }
    printf("\n count of zeroes %d=%d.",No,zcnt);

    getch();
    return 0;
}


