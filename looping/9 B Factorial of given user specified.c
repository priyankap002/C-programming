#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Fact = 0;

    Up:
        printf("\n Enter a Number : ");
        scanf("%d",&No);

        Temp = No;
        Fact = 1;

        if(No <= 0)
        {
            printf("\n Invalid Input\n");
            goto Up;
        }

        while( Temp > 1 )
        {
            Fact = Fact * Temp;
            Temp--;
        }

        printf("\n Factorial of %d is = %d.", No, Fact);

        printf("\n Thanks");

        getch();
        return 0;
}


