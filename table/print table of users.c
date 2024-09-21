#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,i=0;

    printf("\n enter a number= ");
    scanf("%d",&No1);

    printf("\n table of %d is => \n",No1);

    while(i <= 10)
    {
        printf("\n %3d * %3d = %d." No1,i,(i*No1));
        i++;
    }

    getch();
    return 0;
}
