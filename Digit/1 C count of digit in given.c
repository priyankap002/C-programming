#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Dig=0,cnt=0 ,search_Dig=0;

    printf("\n Enter a Number= ");
    scanf("%d",&No);
    printf("\n Enter a Digit= ");
    scanf("%d",&search_Dig);


    Temp = No;

    while(Temp>0)
    {
        Dig=Temp%10;

        if(Dig==search_Dig)
        {
            cnt++;
        }

        Temp=Temp/10;
    }

    printf("\n %d count of Digits given No %d=%d times.",search_Dig,No,cnt);

    getch();
    return 0;
}



