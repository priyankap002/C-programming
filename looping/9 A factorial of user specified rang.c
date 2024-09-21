#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0;
    long long int Fact=0;

    printf("\n enter a number:");
    scanf("%d",&No);

    for(Temp=No, Fact=1; Temp>1; Temp--)
    {
        Fact = Fact * Temp;
    }
    printf("\n Factorial of %d is = %1d.",No,Fact);

    getch();
    return 0;


}
