#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n0 Enter an integer Number = ");
    scanf("%d",&Num);

    if( Num == 0)
    {
        printf("\n Given Number is Neutral.");
    }
    else if( Num % 2 == 0)
    {
        printf("\n Given Number is Even.");
    }
    else
    {
        printf("\n Given Number is Odd.");
    }

    printf("\n Thanks.");

    getch();
    return 0;
}
