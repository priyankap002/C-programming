#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,dig=0,Temp=0,Rev=0;

    printf("\n Enter a Number= ");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
        dig=Temp%10;
        Rev=(Rev*10)+dig;
        Temp=Temp/10;
    }
    printf("\n reverse of digit %d=%d.",No,Rev);

    getch();
    return 0;
}
