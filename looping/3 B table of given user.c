#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,cnt=0;

    printf("\n enter a Number => ");
    scanf("%d",&No);

    printf("\n  table of %d is => \n ",No);

    for(cnt=1;cnt<=10;cnt++)
    {
         printf("\n %3d * %3d = %d ", No, cnt,(cnt*No));
    }
    getch();
    return 0;
}
