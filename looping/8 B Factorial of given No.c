#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Fact = 0, Temp = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    for(Fact = 1, Temp = No; Temp > 1;  Temp--)
    {
        Fact = Fact*Temp;             ///Fact = Fact * Temp;
    }

    printf("\n Factorial of %d is = %d.",No, Fact);

    getch();
    return 0;
}
