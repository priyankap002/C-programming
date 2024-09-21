#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;

    printf("\n Enter an Integer Number= ");
    scanf("%d",&Num);

    ( Num == 0) ? printf("\n Given No is Neutral."):((Num%2==0) ? printf("\n Given no is Even."): printf("\n Given No is Odd."));

     printf("\n thanks");

     getch();
     return 0;
}


