#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0;
    long long int Fact=1;
    printf("\n Enter To Calculate its Factorial= ");
    scanf("%d",&No);

    Temp=No;

    while(Temp>1)
    {
        Fact=Fact*Temp;
        Temp--;
    }
    printf("\n Factorial of Number %d=%11d",No,Fact);
    printf("\n\n Thanks");

    getch();
    return 0;
}


