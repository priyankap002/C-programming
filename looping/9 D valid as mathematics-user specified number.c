#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Fact = 0, Temp = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    Temp = No;
    Fact = 1;

    if(No < 0)
    {
        printf("\n INVALID INPUT!!!");
    }
    else
    {
        while( Temp > 0 )
        {
            Fact = Fact * Temp;
            Temp--;
        }

        printf("\n Factorial of %d is = %d.", No, Fact);
    }

    printf("\n Thanks for interacting...");

    getch();
    return 0;
}

