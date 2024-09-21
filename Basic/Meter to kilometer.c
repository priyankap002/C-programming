#include<stdio.h>
#include<conio.h>

int main()
{
     float Meter = 0,Kilometer = 0;

     printf("\n Distance in Meter:",Meter);
     scanf("%f",&Meter);

     Meter /=1000;

     printf("\n distance in Kilometer: %f",Meter);

     getch();
     return 0;
}
