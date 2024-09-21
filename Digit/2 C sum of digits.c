#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,dSum=0,Temp=0;

    printf("\n Enter a number= ");
    scanf("%d",&No);

    for(Temp = No;Temp > 0;Temp /=10 )
    {
        dSum += (Temp % 10);
    }

    printf("\n Sum of digits %d = %d.",No,dSum);

    getch();
    return 0;
}

