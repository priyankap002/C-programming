#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Fact = 0,Temp = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    Temp = No;
    Fact = 1;

    if(No < 0 )
    {
        while( Temp <0 )
        {
            Fact= Fact * Temp;
            Temp++;
        }

    }
    else
    {
        while(Temp>0)
        {
            Fact=Fact*Temp;
            Temp--;
        }
    }
    printf("\n Factorial of Given No %d is  = %d",No,Fact);

    getch();
    return 0;
}
