#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No1=0,No2=0;
    printf("\n  Enter Number 1 : ");
    scanf("%d",&No1);
    printf("\n  Enter Number 2 : ");
    scanf("%d",&No2);
    printf("\n\n Given Numbers Before swap\n Number 1=%d,Number 2=%d",No1,No2);
    printf("\n\n Given Numbers After swap\n Number 1=%d,Number 2=%d",No1,No2);
    No1 = No1 + No2;
    No2 = No1 - No2;
    No1 = No1 - No2;



    printf("\n Thanks!!!");
    getch();
    return 0;


}
