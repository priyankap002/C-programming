/// Maximum From 2 Numbers - Using Ternary
#include<stdio.h>
#include<conio.h>

int main()
{
    int  N1 = 0, N2 = 0;

    printf("\n Enter 2 Integer Numbers = ");
    scanf("%d%d",&N1,&N2);



    (N1 == N2) ? printf("\n N1 & N2 Equal") : ( (N1 > N2) ?  printf("\n %d is Max.",N1) :  printf("\n %d is Max.",N2) );




    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
