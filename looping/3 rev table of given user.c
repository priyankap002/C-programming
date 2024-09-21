#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,cnt=0;

    printf("\n enter a Number => ");
    scanf("%d",&No);

    printf("\n reverse table of %d is => \n ",No);

    for(cnt=10;cnt>=1;cnt--)
    {
         printf("\n %3d * %-3d = %3d ", No, cnt,(cnt*No));
    }
    getch();
    return 0;
}
